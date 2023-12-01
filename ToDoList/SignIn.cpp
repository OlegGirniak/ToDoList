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
        // ������������ ����� StreamWriter ��� ������ � ����
        StreamWriter^ sw = gcnew StreamWriter(filePath);

        for each (User ^ user in users)
        {
            // ����� ����� �� ������ �����������
            sw->WriteLine(user->GetLogin());
            sw->WriteLine(user->GetPassword());

            // ����� ����� �����������
            List<Task^>^ tasks = user->GetTasks();
            sw->WriteLine(tasks->Count); // �������� ������� �����

            for each (Task ^ task in tasks)
            {
                // ����� ����� �� ����� ����� ������
                sw->WriteLine(task->GetName());
                sw->WriteLine(task->GetDescription());
            }
        }

        // �������� ������
        sw->Close();

        Console::WriteLine("��� ������������ ������ ������� � ����.");
    }
    catch (Exception^ e)
    {
        Console::WriteLine("������� �������: " + e->Message);
    }
}

List<User^>^ ReadUsersFromFile(String^ filePath)
{
    List<User^>^ users = gcnew List<User^>;

    try
    {
        // ������������ ����� StreamReader ��� ���������� � �����
        StreamReader^ sr = gcnew StreamReader(filePath);

        while (!sr->EndOfStream)
        {
            // ������� ����� �� ������ �����������
            String^ login = sr->ReadLine();
            String^ password = sr->ReadLine();

            // ������� ������� ����� �����������
            int taskCount = Convert::ToInt32(sr->ReadLine());

            // ��������� ������ ��'���� �����������
            User^ user = gcnew User(login, password);

            // ������� ����� �����������
            for (int i = 0; i < taskCount; ++i)
            {
                String^ taskName = sr->ReadLine();
                String^ taskDescription = sr->ReadLine();

                // ��������� ������ ��'���� ������ �� ��������� ���� �� �����������
                Task^ task = gcnew Task(taskName, taskDescription);
                user->GetTasks()->Add(task);
            }

            // ��������� ����������� �� ������
            users->Add(user);
        }

        // �������� ������
        sr->Close();

        Console::WriteLine("��� ������������ ������ ������ � �����.");
    }
    catch (Exception^ e)
    {
        Console::WriteLine("������� �������: " + e->Message);
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