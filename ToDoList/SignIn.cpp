#pragma once
#include "Tasks.h"
#include "SignIn.h"
#include "SignUp.h"
#include "User.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

void WriteUsersToFile(List<User^>^ users, String^ filePath)
{
    try
    {
        // Використання класу StreamWriter для запису у файл
        StreamWriter^ sw = gcnew StreamWriter(filePath);

        for each (User ^ user in users)
        {
            // Запис логіну та пароля користувача
            sw->WriteLine(user->GetLogin());
            sw->WriteLine(user->GetPassword());

            // Запис задач користувача
            List<Task^>^ tasks = user->GetTasks();
            sw->WriteLine(tasks->Count); // Записуємо кількість задач

            for each (Task ^ task in tasks)
            {
                // Запис назви та опису кожної задачі
                sw->WriteLine(task->GetName());
                sw->WriteLine(task->GetDescription());
            }
        }

        // Закриття потоку
        sw->Close();

        Console::WriteLine("Дані користувачів успішно записані у файл.");
    }
    catch (Exception^ e)
    {
        Console::WriteLine("Сталася помилка: " + e->Message);
    }
}

List<User^>^ ReadUsersFromFile(String^ filePath)
{
    List<User^>^ users = gcnew List<User^>;

    try
    {
        // Використання класу StreamReader для зчитування з файлу
        StreamReader^ sr = gcnew StreamReader(filePath);

        while (!sr->EndOfStream)
        {
            // Читання логіну та пароля користувача
            String^ login = sr->ReadLine();
            String^ password = sr->ReadLine();

            // Читання кількості задач користувача
            int taskCount = Convert::ToInt32(sr->ReadLine());

            // Створення нового об'єкту користувача
            User^ user = gcnew User(login, password);

            // Читання задач користувача
            for (int i = 0; i < taskCount; ++i)
            {
                String^ taskName = sr->ReadLine();
                String^ taskDescription = sr->ReadLine();

                // Створення нового об'єкту задачі та додавання його до користувача
                Task^ task = gcnew Task(taskName, taskDescription);
                user->GetTasks()->Add(task);
            }

            // Додавання користувача до списку
            users->Add(user);
        }

        // Закриття потоку
        sr->Close();

        Console::WriteLine("Дані користувачів успішно зчитані з файлу.");
    }
    catch (Exception^ e)
    {
        Console::WriteLine("Сталася помилка: " + e->Message);
    }

    return users;
}


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

    String^ fileName("users.txt");

    List<User^>^ users = ReadUsersFromFile(fileName);

	ToDoList::SignIn mainForm(users);
	Application::Run(% mainForm);

    WriteUsersToFile(users, fileName);

    return 0;
}