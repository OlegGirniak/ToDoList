#pragma once
#include "Task.h"

using namespace System::Collections::Generic;

ref class User
{
private:
	System::String^ login;
	System::String^ password;
	List<Task^>^ tasks;

public:
	User()
	{
		login = "";
		password = "";
		tasks = gcnew List<Task^>;
	}

	User(System::String^ login, System::String^ password)
	{
		this->login = login;
		this->password = password;
		tasks = gcnew List<Task^>;
	}

	System::String^ GetLogin() 
	{
		return login;
	}

	System::String^ GetPassword()
	{
		return password;
	}

	List<Task^>^ GetTasks()
	{
		return tasks;
	}
};

