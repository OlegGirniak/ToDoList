#pragma once
#include "Task.h"

namespace ToDoList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Tasks
	/// </summary>
	public ref class Tasks : public System::Windows::Forms::Form
	{
	public:
		Tasks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Tasks(List<Task^>^ taskList)
		{
			this->taskList = taskList;
			InitializeComponent();

			for each (Task ^ task in taskList)
			{
				TaskListBox->Items->Add(task->GetName());
			}

			TaskListBox->SelectedIndexChanged += gcnew EventHandler(this, &Tasks::ListBoxSelectedIndexChanged);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Tasks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ListBox^ TaskListBox;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::Button^ AddTaskButton;
	private: System::Windows::Forms::Button^ DeleteTaskButton;
	private: System::Windows::Forms::Button^ ClearDescription;



	private: System::Windows::Forms::TextBox^ TaskTextbox;

	private: System::Windows::Forms::TextBox^ DescriptionTaskList;
	private: System::Windows::Forms::Button^ ModifyTaskDescription;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Tasks::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TaskTextbox = (gcnew System::Windows::Forms::TextBox());
			this->TaskListBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->DescriptionTaskList = (gcnew System::Windows::Forms::TextBox());
			this->AddTaskButton = (gcnew System::Windows::Forms::Button());
			this->DeleteTaskButton = (gcnew System::Windows::Forms::Button());
			this->ClearDescription = (gcnew System::Windows::Forms::Button());
			this->ModifyTaskDescription = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TaskTextbox);
			this->groupBox1->Controls->Add(this->TaskListBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(205, 405);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tasks";
			// 
			// TaskTextbox
			// 
			this->TaskTextbox->BackColor = System::Drawing::Color::White;
			this->TaskTextbox->ForeColor = System::Drawing::Color::IndianRed;
			this->TaskTextbox->Location = System::Drawing::Point(7, 317);
			this->TaskTextbox->Multiline = true;
			this->TaskTextbox->Name = L"TaskTextbox";
			this->TaskTextbox->Size = System::Drawing::Size(192, 82);
			this->TaskTextbox->TabIndex = 1;
			// 
			// TaskListBox
			// 
			this->TaskListBox->BackColor = System::Drawing::Color::Gray;
			this->TaskListBox->ForeColor = System::Drawing::SystemColors::Window;
			this->TaskListBox->FormattingEnabled = true;
			this->TaskListBox->ItemHeight = 20;
			this->TaskListBox->Location = System::Drawing::Point(6, 26);
			this->TaskListBox->Name = L"TaskListBox";
			this->TaskListBox->Size = System::Drawing::Size(194, 284);
			this->TaskListBox->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->DescriptionTaskList);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Location = System::Drawing::Point(268, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(293, 405);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"description";
			// 
			// DescriptionTaskList
			// 
			this->DescriptionTaskList->BackColor = System::Drawing::Color::White;
			this->DescriptionTaskList->ForeColor = System::Drawing::Color::IndianRed;
			this->DescriptionTaskList->Location = System::Drawing::Point(6, 26);
			this->DescriptionTaskList->Multiline = true;
			this->DescriptionTaskList->Name = L"DescriptionTaskList";
			this->DescriptionTaskList->Size = System::Drawing::Size(281, 373);
			this->DescriptionTaskList->TabIndex = 2;
			this->DescriptionTaskList->MouseCaptureChanged += gcnew System::EventHandler(this, &Tasks::DescriptionTaskList_MouseCaptureChanged);
			// 
			// AddTaskButton
			// 
			this->AddTaskButton->BackColor = System::Drawing::Color::DarkGray;
			this->AddTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddTaskButton->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTaskButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddTaskButton->Location = System::Drawing::Point(12, 423);
			this->AddTaskButton->Name = L"AddTaskButton";
			this->AddTaskButton->Size = System::Drawing::Size(92, 38);
			this->AddTaskButton->TabIndex = 6;
			this->AddTaskButton->Text = L"Add";
			this->AddTaskButton->UseVisualStyleBackColor = false;
			this->AddTaskButton->Click += gcnew System::EventHandler(this, &Tasks::AddTaskButton_Click);
			// 
			// DeleteTaskButton
			// 
			this->DeleteTaskButton->BackColor = System::Drawing::Color::DarkGray;
			this->DeleteTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteTaskButton->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteTaskButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->DeleteTaskButton->Location = System::Drawing::Point(110, 423);
			this->DeleteTaskButton->Name = L"DeleteTaskButton";
			this->DeleteTaskButton->Size = System::Drawing::Size(110, 38);
			this->DeleteTaskButton->TabIndex = 7;
			this->DeleteTaskButton->Text = L"Delete";
			this->DeleteTaskButton->UseVisualStyleBackColor = false;
			this->DeleteTaskButton->Click += gcnew System::EventHandler(this, &Tasks::DeleteTaskButton_Click);
			// 
			// ClearDescription
			// 
			this->ClearDescription->BackColor = System::Drawing::Color::DarkGray;
			this->ClearDescription->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClearDescription->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClearDescription->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearDescription->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ClearDescription->Location = System::Drawing::Point(417, 423);
			this->ClearDescription->Name = L"ClearDescription";
			this->ClearDescription->Size = System::Drawing::Size(138, 38);
			this->ClearDescription->TabIndex = 8;
			this->ClearDescription->Text = L"Clear";
			this->ClearDescription->UseVisualStyleBackColor = false;
			this->ClearDescription->Click += gcnew System::EventHandler(this, &Tasks::ClearDescription_Click);
			// 
			// ModifyTaskDescription
			// 
			this->ModifyTaskDescription->BackColor = System::Drawing::Color::DarkGray;
			this->ModifyTaskDescription->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModifyTaskDescription->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ModifyTaskDescription->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModifyTaskDescription->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ModifyTaskDescription->Location = System::Drawing::Point(274, 423);
			this->ModifyTaskDescription->Name = L"ModifyTaskDescription";
			this->ModifyTaskDescription->Size = System::Drawing::Size(137, 38);
			this->ModifyTaskDescription->TabIndex = 9;
			this->ModifyTaskDescription->Text = L"modify";
			this->ModifyTaskDescription->UseVisualStyleBackColor = false;
			this->ModifyTaskDescription->Click += gcnew System::EventHandler(this, &Tasks::ModifyTaskDescription_Click);

			// 
			// Tasks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->ClientSize = System::Drawing::Size(576, 483);
			this->Controls->Add(this->ModifyTaskDescription);
			this->Controls->Add(this->ClearDescription);
			this->Controls->Add(this->DeleteTaskButton);
			this->Controls->Add(this->AddTaskButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Tasks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tasks";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: List<Task^>^ taskList;
		  Task^ currentTask = gcnew Task();

	private: System::Void AddTaskButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ tmp = TaskTextbox->Text;
		if (tmp != "")
		{
			Task^ newTask = gcnew Task(tmp);
			taskList->Add(newTask);
			TaskListBox->Items->Add(newTask);
			TaskTextbox->Text = "";
		}
	}
	private: System::Void DeleteTaskButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int index = TaskListBox->SelectedIndex;
		if (index != -1)
		{
			taskList->RemoveAt(index);
			TaskListBox->Items->RemoveAt(index);
		}
	}

	private: void ListBoxSelectedIndexChanged(Object^ sender, EventArgs^ e)
	{
		ListBox^ listBox = dynamic_cast<ListBox^>(sender);
		if (listBox != nullptr)
		{
			int selectedIndex = listBox->SelectedIndex;

			if (selectedIndex != -1)
			{
				currentTask = taskList[selectedIndex];
				DescriptionTaskList->Clear();
				DescriptionTaskList->Text = (currentTask->GetDescription());
			}
			else
			{
				DescriptionTaskList->Clear();
				DescriptionTaskList->Text = "";
			}
		}
	}


	private: System::Void ModifyTaskDescription_Click(System::Object^ sender, System::EventArgs^ e)
	{
		currentTask->SetDescription(DescriptionTaskList->Text);
	}
	private: System::Void ClearDescription_Click(System::Object^ sender, System::EventArgs^ e)
	{
		currentTask->SetDescription("Empty");
		DescriptionTaskList->Text = "Empty";
	}
	private: System::Void DescriptionTaskList_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (DescriptionTaskList->Text == "Empty")
		{
			DescriptionTaskList->Text = "";
		}
	}

};
}
