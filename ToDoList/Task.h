#pragma once
#include "string"

ref class Task
{
private:
	System::String^ name;
	System::String^ description;
	
public:
	Task()
	{
		this->name = "Empty";
		this->description = "Empty";
	}

	Task(System::String^ name)
	{
		this->name = name;
		this->description = "Empty";
	}

	Task(System::String^ name, System::String^ description)
	{
		this->name = name;
		this->description = description;
	}

	virtual System::String^ ToString() override
	{
		return name;
	}

	System::String^ GetName() { return name; }
	System::String^ GetDescription() { return description; }
	void SetDescription(System::String^ description) { this->description = description; }

};

