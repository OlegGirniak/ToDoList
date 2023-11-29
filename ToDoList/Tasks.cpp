#include "Tasks.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	List<Task^>^ taskList = gcnew List<Task^>;

	ToDoList::Tasks Tasks(taskList);
	Application::Run(% Tasks);
}