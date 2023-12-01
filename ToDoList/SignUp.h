#pragma once
#include "User.h"
#include "Tasks.h"

namespace ToDoList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		SignUp(List<User^>^ Users)
		{	
			users = Users;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ExitButton;
	protected:

	private: System::Windows::Forms::Button^ SignUpButton;
	private: System::Windows::Forms::TextBox^ NewPasswordTextbox_1;
	protected:


	private: System::Windows::Forms::TextBox^ UserNameTextbox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ SignInLabel;
	private: System::Windows::Forms::TextBox^ NewPasswordTextbox_2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUp::typeid));
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SignUpButton = (gcnew System::Windows::Forms::Button());
			this->NewPasswordTextbox_1 = (gcnew System::Windows::Forms::TextBox());
			this->UserNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SignInLabel = (gcnew System::Windows::Forms::Label());
			this->NewPasswordTextbox_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::DarkGray;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->ExitButton, L"ExitButton");
			this->ExitButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &SignUp::ExitButton_Click);
			// 
			// SignUpButton
			// 
			this->SignUpButton->BackColor = System::Drawing::Color::DarkGray;
			this->SignUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->SignUpButton, L"SignUpButton");
			this->SignUpButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SignUpButton->Name = L"SignUpButton";
			this->SignUpButton->UseVisualStyleBackColor = false;
			this->SignUpButton->Click += gcnew System::EventHandler(this, &SignUp::SignUpButton_Click);
			// 
			// NewPasswordTextbox_1
			// 
			this->NewPasswordTextbox_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->NewPasswordTextbox_1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->NewPasswordTextbox_1, L"NewPasswordTextbox_1");
			this->NewPasswordTextbox_1->ForeColor = System::Drawing::SystemColors::Window;
			this->NewPasswordTextbox_1->Name = L"NewPasswordTextbox_1";
			// 
			// UserNameTextbox
			// 
			this->UserNameTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->UserNameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->UserNameTextbox, L"UserNameTextbox");
			this->UserNameTextbox->ForeColor = System::Drawing::SystemColors::Window;
			this->UserNameTextbox->Name = L"UserNameTextbox";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Name = L"label1";
			// 
			// SignInLabel
			// 
			resources->ApplyResources(this->SignInLabel, L"SignInLabel");
			this->SignInLabel->BackColor = System::Drawing::Color::Transparent;
			this->SignInLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SignInLabel->Name = L"SignInLabel";
			// 
			// NewPasswordTextbox_2
			// 
			this->NewPasswordTextbox_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->NewPasswordTextbox_2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->NewPasswordTextbox_2, L"NewPasswordTextbox_2");
			this->NewPasswordTextbox_2->ForeColor = System::Drawing::SystemColors::Window;
			this->NewPasswordTextbox_2->Name = L"NewPasswordTextbox_2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Name = L"label4";
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SignUp::checkBox1_CheckedChanged);
			// 
			// SignUp
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NewPasswordTextbox_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->SignUpButton);
			this->Controls->Add(this->NewPasswordTextbox_1);
			this->Controls->Add(this->UserNameTextbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SignInLabel);
			this->Name = L"SignUp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: List<User^>^ users;
		

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkBox1->Checked)
			SignUpButton->Enabled = true;
		else
			SignUpButton->Enabled = false;
	}

	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}

	private: System::Void SignUpButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (UserNameTextbox->Text->Length >= 8)
		{
			if (NewPasswordTextbox_1->Text->Length >= 8)
			{
				bool ifPasswordIsReserved = false;

				for each (User^ user in users)
				{
					if (user->GetPassword() == NewPasswordTextbox_1->Text)
					{
						MessageBox::Show("Passwords is reserved", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
						ifPasswordIsReserved = true;
						break;
					}
				}

				if (NewPasswordTextbox_1->Text == NewPasswordTextbox_2->Text && !ifPasswordIsReserved)
				{
					User^ newUser = gcnew User(UserNameTextbox->Text, NewPasswordTextbox_1->Text);
					users->Add(newUser);
					this->Hide();
					Tasks^ tasksForm = gcnew Tasks(newUser);
					tasksForm->ShowDialog();
				}
				else
				{
					MessageBox::Show("Passwords must equal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else
			{
				MessageBox::Show("Password must have 8 symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else
		{
			MessageBox::Show("Name must have 8 symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
