#pragma once
#include "helper.h"

namespace dll_injector {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm  : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dllLable;

	protected:


	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ loadPIDs;
	private: System::Windows::Forms::Button^ injectionButton;



	private: System::Windows::Forms::CheckedListBox^ processCheckBoxList;
	private: System::Windows::Forms::OpenFileDialog^ openDllFile;
	private: System::Windows::Forms::TextBox^ searchbar;

	private: System::Windows::Forms::Label^ searchbarLable;

	private: System::Windows::Forms::Button^ selectFileButton;
	private: System::Windows::Forms::TextBox^ dllTextBox;






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
			ResourceManager^ rm = gcnew ResourceManager("Inector.Resource", GetType()->Assembly);

			this->Icon = safe_cast<System::Drawing::Icon^>(rm->GetObject(L"icon"));
			this->dllLable = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loadPIDs = (gcnew System::Windows::Forms::Button());
			this->injectionButton = (gcnew System::Windows::Forms::Button());
			this->processCheckBoxList = (gcnew System::Windows::Forms::CheckedListBox());
			this->openDllFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->searchbar = (gcnew System::Windows::Forms::TextBox());
			this->searchbarLable = (gcnew System::Windows::Forms::Label());
			this->selectFileButton = (gcnew System::Windows::Forms::Button());
			this->dllTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// dllLable
			// 
			this->dllLable->AutoSize = true;
			this->dllLable->Location = System::Drawing::Point(31, 42);
			this->dllLable->Name = L"dllLable";
			this->dllLable->Size = System::Drawing::Size(164, 16);
			this->dllLable->TabIndex = 0;
			this->dllLable->Text = L"Choose dll file for injection:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose process :";
			// 
			// loadPIDs
			// 
			this->loadPIDs->Location = System::Drawing::Point(403, 283);
			this->loadPIDs->Name = L"loadPIDs";
			this->loadPIDs->Size = System::Drawing::Size(122, 29);
			this->loadPIDs->TabIndex = 6;
			this->loadPIDs->Text = L"Load processes";
			this->loadPIDs->UseVisualStyleBackColor = true;
			this->loadPIDs->Click += gcnew System::EventHandler(this, &mainForm::loadPIDs_Click);
			// 
			// injectionButton
			// 
			this->injectionButton->Enabled = false;
			this->injectionButton->Location = System::Drawing::Point(154, 528);
			this->injectionButton->Name = L"injectionButton";
			this->injectionButton->Size = System::Drawing::Size(213, 32);
			this->injectionButton->TabIndex = 7;
			this->injectionButton->Text = L"Inject";
			this->injectionButton->UseVisualStyleBackColor = true;
			this->injectionButton->Click += gcnew System::EventHandler(this, &mainForm::injectionButtonClick);
			// 
			// processCheckBoxList
			// 
			this->processCheckBoxList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->processCheckBoxList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->processCheckBoxList->CheckOnClick = true;
			this->processCheckBoxList->FormattingEnabled = true;
			this->processCheckBoxList->Location = System::Drawing::Point(34, 181);
			this->processCheckBoxList->Name = L"processCheckBoxList";
			this->processCheckBoxList->Size = System::Drawing::Size(363, 206);
			this->processCheckBoxList->TabIndex = 8;
			this->processCheckBoxList->SelectedIndexChanged += gcnew System::EventHandler(this, &mainForm::processCheckBoxList_SelectedIndexChanged);
			// 
			// openDllFile
			// 
			this->openDllFile->Filter = L"dll files (*.dll) |*.dll";
			this->openDllFile->InitialDirectory = L"c:\\\\";
			this->openDllFile->RestoreDirectory = true;
			// 
			// searchbar
			// 
			this->searchbar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->searchbar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->searchbar->Location = System::Drawing::Point(34, 423);
			this->searchbar->MaxLength = 200;
			this->searchbar->Name = L"searchbar";
			this->searchbar->Size = System::Drawing::Size(221, 22);
			this->searchbar->TabIndex = 9;
			this->searchbar->TextChanged += gcnew System::EventHandler(this, &mainForm::searchbar_TextChanged);
			// 
			// searchbarLable
			// 
			this->searchbarLable->AutoSize = true;
			this->searchbarLable->Location = System::Drawing::Point(31, 404);
			this->searchbarLable->Name = L"searchbarLable";
			this->searchbarLable->Size = System::Drawing::Size(105, 16);
			this->searchbarLable->TabIndex = 10;
			this->searchbarLable->Text = L"Search process:";
			// 
			// selectFileButton
			// 
			this->selectFileButton->Location = System::Drawing::Point(431, 76);
			this->selectFileButton->Name = L"selectFileButton";
			this->selectFileButton->Size = System::Drawing::Size(82, 29);
			this->selectFileButton->TabIndex = 2;
			this->selectFileButton->Text = L"Select file";
			this->selectFileButton->UseVisualStyleBackColor = true;
			this->selectFileButton->Click += gcnew System::EventHandler(this, &mainForm::selectFileClick);
			// 
			// dllTextBox
			// 
			this->dllTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->dllTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dllTextBox->Enabled = false;
			this->dllTextBox->Location = System::Drawing::Point(34, 80);
			this->dllTextBox->Name = L"dllTextBox";
			this->dllTextBox->ReadOnly = true;
			this->dllTextBox->Size = System::Drawing::Size(378, 22);
			this->dllTextBox->TabIndex = 4;
			this->dllTextBox->TextChanged += gcnew System::EventHandler(this, &mainForm::dllTextBox_TextChanged);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(539, 583);
			this->Controls->Add(this->searchbarLable);
			this->Controls->Add(this->searchbar);
			this->Controls->Add(this->processCheckBoxList);
			this->Controls->Add(this->injectionButton);
			this->Controls->Add(this->loadPIDs);
			this->Controls->Add(this->dllTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->selectFileButton);
			this->Controls->Add(this->dllLable);
			this->Name = L"mainForm";
			this->Text = L"Dll injecor v1.34";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void loadPIDs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->processCheckBoxList->Items->AddRange(EnumProcs());
	}
	private: System::Void processCheckBoxList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < this->processCheckBoxList->Items->Count; ++i)
			if (processCheckBoxList->SelectedIndex != i) processCheckBoxList->SetItemChecked(i, false);
	}
	private: System::Void selectFileClick(System::Object^ sender, System::EventArgs^ e) {
		if (openDllFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->dllTextBox->Text = openDllFile->FileName;
		}

	}
	private: System::Void injectionButtonClick(System::Object^ sender, System::EventArgs^ e) {
		int result = injectDll(this->dllTextBox->Text, this->processCheckBoxList->SelectedItem);
		this->injectionButton->Enabled = false;
		if (result == 0) {
			MessageBox::Show("Injection successful");
		}
		else {
			MessageBox::Show("Injection Failed, Maybe switch 32bit and 64 bit?");
		}
		this->injectionButton->Enabled = true;
		this->dllTextBox->Text = "";
		this->processCheckBoxList->Items->Clear();

	}

	private: System::Void searchbar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//filter process processCheckBoxList to only include those that contain the searchbar text
		this->processCheckBoxList->Items->Clear();
		this->processCheckBoxList->Items->AddRange(EnumProcsWithFilter(this->searchbar->Text));

	}
	private: System::Void dllTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->dllTextBox->Text != "") {
			this->injectionButton->Enabled = TRUE;
		}
	}

	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}