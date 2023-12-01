#pragma once
#include "User.h"
#include "Task.h"
#include "SignUp.h"

namespace ToDoList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignIn
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	public:
		SignIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		SignIn(List<User^>^ Users)
		{
			users = Users;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SignInLabel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ UsernameTextbox;
	private: System::Windows::Forms::TextBox^ PasswordTextbox;
	private: System::Windows::Forms::Button^ SignInButtom;
	private: System::Windows::Forms::Button^ ExitButton;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ CreateLabel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn::typeid));
			this->SignInLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UsernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->SignInButtom = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CreateLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SignInLabel
			// 
			this->SignInLabel->AutoSize = true;
			this->SignInLabel->BackColor = System::Drawing::Color::Transparent;
			this->SignInLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SignInLabel->Location = System::Drawing::Point(78, 58);
			this->SignInLabel->Name = L"SignInLabel";
			this->SignInLabel->Size = System::Drawing::Size(150, 44);
			this->SignInLabel->TabIndex = 0;
			this->SignInLabel->Text = L"Sigh In";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(12, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(12, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// UsernameTextbox
			// 
			this->UsernameTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->UsernameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UsernameTextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->UsernameTextbox->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameTextbox->Location = System::Drawing::Point(17, 172);
			this->UsernameTextbox->Multiline = true;
			this->UsernameTextbox->Name = L"UsernameTextbox";
			this->UsernameTextbox->Size = System::Drawing::Size(254, 26);
			this->UsernameTextbox->TabIndex = 3;
			// 
			// PasswordTextbox
			// 
			this->PasswordTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->PasswordTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordTextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PasswordTextbox->ForeColor = System::Drawing::SystemColors::Window;
			this->PasswordTextbox->Location = System::Drawing::Point(17, 241);
			this->PasswordTextbox->Multiline = true;
			this->PasswordTextbox->Name = L"PasswordTextbox";
			this->PasswordTextbox->Size = System::Drawing::Size(254, 26);
			this->PasswordTextbox->TabIndex = 4;
			// 
			// SignInButtom
			// 
			this->SignInButtom->BackColor = System::Drawing::Color::DarkGray;
			this->SignInButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignInButtom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignInButtom->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInButtom->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SignInButtom->Location = System::Drawing::Point(16, 290);
			this->SignInButtom->Name = L"SignInButtom";
			this->SignInButtom->Size = System::Drawing::Size(110, 38);
			this->SignInButtom->TabIndex = 5;
			this->SignInButtom->Text = L"Sign In";
			this->SignInButtom->UseVisualStyleBackColor = false;
			this->SignInButtom->Click += gcnew System::EventHandler(this, &SignIn::SignInButtom_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::DarkGray;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ExitButton->Location = System::Drawing::Point(161, 290);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(110, 38);
			this->ExitButton->TabIndex = 7;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &SignIn::ExitButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(64, 372);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(274, 30);
			this->label3->TabIndex = 8;
			this->label3->Text = L"If you don\'t have account";
			// 
			// CreateLabel
			// 
			this->CreateLabel->AutoSize = true;
			this->CreateLabel->BackColor = System::Drawing::Color::Transparent;
			this->CreateLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreateLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CreateLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CreateLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->CreateLabel->Location = System::Drawing::Point(332, 372);
			this->CreateLabel->Name = L"CreateLabel";
			this->CreateLabel->Size = System::Drawing::Size(76, 30);
			this->CreateLabel->TabIndex = 9;
			this->CreateLabel->Text = L"create";
			this->CreateLabel->Click += gcnew System::EventHandler(this, &SignIn::CreateLabel_Click);
			// 
			// SignIn
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(524, 411);
			this->Controls->Add(this->CreateLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->SignInButtom);
			this->Controls->Add(this->PasswordTextbox);
			this->Controls->Add(this->UsernameTextbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SignInLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SignIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private:
	List<User^>^ users;

private: System::Void SignInButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (UsernameTextbox->Text == "" || PasswordTextbox->Text == "")
	{
		MessageBox::Show("Enter data.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		bool ifSignIn = false;

		for each (User ^ user in users)
		{
			if (user->GetLogin() == UsernameTextbox->Text && user->GetPassword() == PasswordTextbox->Text)
			{
				ifSignIn = true;
				this->Hide();
				Tasks^ tasksForm = gcnew Tasks(user);
				tasksForm->ShowDialog();
				break;
			}
		}
		if (!ifSignIn)
		{
			MessageBox::Show("Invalid password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
private: System::Void CreateLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	SignUp^ signUpForm = gcnew SignUp(users);
	signUpForm->ShowDialog();
}
};
}
