#pragma once
#include <iostream>
#include <fstream>

#include <String>
#include <cctype>
#include <msclr/marshal_cppstd.h>  
#include <msclr/marshal.h>  
#include "Exceptions.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include "Clothes.h"
#include "WorkWhitExceptionFile.h"
#include "WorkWhitData.h"
#include "WorkWhitTable.h"
#include <map>
using namespace std;
namespace ProjectCouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttom1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::CheckBox^ checkBoxDecrease;
	private: System::Windows::Forms::CheckBox^ checkBoxGrowth;
	private: System::Windows::Forms::CheckBox^ checkBoxMan;
	private: System::Windows::Forms::CheckBox^ checkBoxWoman;
	private: System::Windows::Forms::Button^ buttonDisplayByGender;



























	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ ReadFile;

	private: System::Windows::Forms::ToolStripButton^ SaveAs;
	private: System::Windows::Forms::ToolStripButton^ Exit;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;






















































private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TextBox^ textBoxSizeForAdd;
private: System::Windows::Forms::TextBox^ textBoxFeedbackForAddNewClothes;
private: System::Windows::Forms::TextBox^ textBoxIDForRemuveInfoAboutClothes;
private: System::Windows::Forms::TextBox^ textBoxUserNameForAddNewClothes;
private: System::Windows::Forms::TextBox^ textBoxProducerForAdd;
private: System::Windows::Forms::TextBox^ textBoxSeasonForAdd;
private: System::Windows::Forms::TextBox^ textBoxCostForAdd;
private: System::Windows::Forms::TextBox^ textBoxGenderForAdd;
private: System::Windows::Forms::TextBox^ textBoxColorForAdd;
private: System::Windows::Forms::TextBox^ textBoxTypeForAdd;
private: System::Windows::Forms::TextBox^ textBoxClothesNameForAdd;
private: System::Windows::Forms::TextBox^ textBoxSubTypeForAdd;
private: System::Windows::Forms::TextBox^ textBoxIdForAdd;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ RemuveInfoAboutClothes;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ buttonForAddingNewClothes;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TabPage^ tabPage2jj;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBoxFeedBack;
private: System::Windows::Forms::TextBox^ textBoxIDForChangeFeedback;
private: System::Windows::Forms::TextBox^ textBoxUserName;
private: System::Windows::Forms::TextBox^ textBoxUserNameForDeleteFeedback;
private: System::Windows::Forms::TextBox^ textBoxIdForDeleteFeedback;
private: System::Windows::Forms::TextBox^ textBoxId;
private: System::Windows::Forms::TextBox^ textBoxColor;
private: System::Windows::Forms::TextBox^ textBoxSize;
private: System::Windows::Forms::TextBox^ textBoxProduce;
private: System::Windows::Forms::TextBox^ textBoxSeason;
private: System::Windows::Forms::Button^ buttonAddFeedback;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ buttonDeleteFeedback;
private: System::Windows::Forms::Button^ buttonChangeParams;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::TextBox^ textBoxType;
private: System::Windows::Forms::TextBox^ textBoxSubtype;
private: System::Windows::Forms::TextBox^ textBoxName;
private: System::Windows::Forms::Button^ Found;
private: System::Windows::Forms::Label^ lable3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label32;
















private: System::ComponentModel::IContainer^ components;










































	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttom1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->readToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->checkBoxDecrease = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxGrowth = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMan = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWoman = (gcnew System::Windows::Forms::CheckBox());
			this->buttonDisplayByGender = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ReadFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->SaveAs = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Exit = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBoxSizeForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFeedbackForAddNewClothes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDForRemuveInfoAboutClothes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserNameForAddNewClothes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProducerForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeasonForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGenderForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColorForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTypeForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClothesNameForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSubTypeForAdd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIdForAdd = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->RemuveInfoAboutClothes = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->buttonForAddingNewClothes = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPage2jj = (gcnew System::Windows::Forms::TabPage());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBoxFeedBack = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDForChangeFeedback = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserNameForDeleteFeedback = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIdForDeleteFeedback = (gcnew System::Windows::Forms::TextBox());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProduce = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeason = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddFeedback = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonDeleteFeedback = (gcnew System::Windows::Forms::Button());
			this->buttonChangeParams = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSubtype = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->Found = (gcnew System::Windows::Forms::Button());
			this->lable3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2jj->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttom1
			// 
			this->buttom1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttom1->Location = System::Drawing::Point(647, 451);
			this->buttom1->Name = L"buttom1";
			this->buttom1->Size = System::Drawing::Size(234, 57);
			this->buttom1->TabIndex = 0;
			this->buttom1->Text = L"Update";
			this->buttom1->UseVisualStyleBackColor = true;
			this->buttom1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Beige;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView1->Location = System::Drawing::Point(38, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(843, 384);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem1,
					this->saveToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(113, 76);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// readToolStripMenuItem1
			// 
			this->readToolStripMenuItem1->Name = L"readToolStripMenuItem1";
			this->readToolStripMenuItem1->Size = System::Drawing::Size(112, 24);
			this->readToolStripMenuItem1->Text = L"Read";
			this->readToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem1_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// buttonSort
			// 
			this->buttonSort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSort->Location = System::Drawing::Point(351, 451);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttonSort->Size = System::Drawing::Size(249, 57);
			this->buttonSort->TabIndex = 9;
			this->buttonSort->Text = L"Sorting by selection sort";
			this->buttonSort->UseVisualStyleBackColor = true;
			this->buttonSort->Click += gcnew System::EventHandler(this, &MyForm::buttonSort_Click);
			// 
			// checkBoxDecrease
			// 
			this->checkBoxDecrease->AutoSize = true;
			this->checkBoxDecrease->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxDecrease->Location = System::Drawing::Point(506, 426);
			this->checkBoxDecrease->Name = L"checkBoxDecrease";
			this->checkBoxDecrease->Size = System::Drawing::Size(144, 23);
			this->checkBoxDecrease->TabIndex = 10;
			this->checkBoxDecrease->Text = L"Sort be decrease";
			this->checkBoxDecrease->UseVisualStyleBackColor = true;
			this->checkBoxDecrease->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDecrease_CheckedChanged);
			// 
			// checkBoxGrowth
			// 
			this->checkBoxGrowth->AutoSize = true;
			this->checkBoxGrowth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxGrowth->Location = System::Drawing::Point(351, 426);
			this->checkBoxGrowth->Name = L"checkBoxGrowth";
			this->checkBoxGrowth->Size = System::Drawing::Size(131, 23);
			this->checkBoxGrowth->TabIndex = 11;
			this->checkBoxGrowth->Text = L"Sort by growth";
			this->checkBoxGrowth->UseVisualStyleBackColor = true;
			this->checkBoxGrowth->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxGrowth_CheckedChanged);
			// 
			// checkBoxMan
			// 
			this->checkBoxMan->AutoSize = true;
			this->checkBoxMan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxMan->Location = System::Drawing::Point(78, 426);
			this->checkBoxMan->Name = L"checkBoxMan";
			this->checkBoxMan->Size = System::Drawing::Size(61, 23);
			this->checkBoxMan->TabIndex = 14;
			this->checkBoxMan->Text = L"Man";
			this->checkBoxMan->UseVisualStyleBackColor = true;
			this->checkBoxMan->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxMan_CheckedChanged);
			// 
			// checkBoxWoman
			// 
			this->checkBoxWoman->AutoSize = true;
			this->checkBoxWoman->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxWoman->Location = System::Drawing::Point(160, 426);
			this->checkBoxWoman->Name = L"checkBoxWoman";
			this->checkBoxWoman->Size = System::Drawing::Size(83, 23);
			this->checkBoxWoman->TabIndex = 13;
			this->checkBoxWoman->Text = L"Woman";
			this->checkBoxWoman->UseVisualStyleBackColor = true;
			this->checkBoxWoman->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxWoman_CheckedChanged);
			// 
			// buttonDisplayByGender
			// 
			this->buttonDisplayByGender->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonDisplayByGender->Location = System::Drawing::Point(78, 451);
			this->buttonDisplayByGender->Name = L"buttonDisplayByGender";
			this->buttonDisplayByGender->Size = System::Drawing::Size(234, 57);
			this->buttonDisplayByGender->TabIndex = 12;
			this->buttonDisplayByGender->Text = L"Display the gender list";
			this->buttonDisplayByGender->UseVisualStyleBackColor = true;
			this->buttonDisplayByGender->Click += gcnew System::EventHandler(this, &MyForm::buttonDisplayByGender_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1469, 27);
			this->menuStrip1->TabIndex = 39;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(50, 23);
			this->toolStripMenuItem1->Text = L"File";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->writeToolStripMenuItem->Text = L"Save";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(56, 23);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(133, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ReadFile, this->SaveAs,
					this->toolStripButton1, this->Exit
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 27);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(35, 486);
			this->toolStrip1->TabIndex = 40;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ReadFile
			// 
			this->ReadFile->AutoSize = false;
			this->ReadFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ReadFile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReadFile.Image")));
			this->ReadFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ReadFile->Name = L"ReadFile";
			this->ReadFile->Size = System::Drawing::Size(53, 24);
			this->ReadFile->Text = L"Read from file";
			this->ReadFile->Click += gcnew System::EventHandler(this, &MyForm::ReadFile_Click);
			// 
			// SaveAs
			// 
			this->SaveAs->AutoSize = false;
			this->SaveAs->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->SaveAs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveAs.Image")));
			this->SaveAs->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(53, 24);
			this->SaveAs->Text = L"Save";
			this->SaveAs->Click += gcnew System::EventHandler(this, &MyForm::SaveAs_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(53, 24);
			this->toolStripButton1->Text = L"Information";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// Exit
			// 
			this->Exit->AutoSize = false;
			this->Exit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(53, 24);
			this->Exit->Text = L"Exit";
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->textBoxSizeForAdd);
			this->tabPage3->Controls->Add(this->textBoxFeedbackForAddNewClothes);
			this->tabPage3->Controls->Add(this->textBoxIDForRemuveInfoAboutClothes);
			this->tabPage3->Controls->Add(this->textBoxUserNameForAddNewClothes);
			this->tabPage3->Controls->Add(this->textBoxProducerForAdd);
			this->tabPage3->Controls->Add(this->textBoxSeasonForAdd);
			this->tabPage3->Controls->Add(this->textBoxCostForAdd);
			this->tabPage3->Controls->Add(this->textBoxGenderForAdd);
			this->tabPage3->Controls->Add(this->textBoxColorForAdd);
			this->tabPage3->Controls->Add(this->textBoxTypeForAdd);
			this->tabPage3->Controls->Add(this->textBoxClothesNameForAdd);
			this->tabPage3->Controls->Add(this->textBoxSubTypeForAdd);
			this->tabPage3->Controls->Add(this->textBoxIdForAdd);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->RemuveInfoAboutClothes);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->buttonForAddingNewClothes);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(572, 454);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Adding and deleting clothes";
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(354, 21);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(143, 23);
			this->label31->TabIndex = 85;
			this->label31->Text = L"Remuve clothes";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(6, 21);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(147, 23);
			this->label30->TabIndex = 84;
			this->label30->Text = L"Add new clothes";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(41, 2);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 19);
			this->label29->TabIndex = 83;
			// 
			// textBoxSizeForAdd
			// 
			this->textBoxSizeForAdd->Location = System::Drawing::Point(138, 189);
			this->textBoxSizeForAdd->Name = L"textBoxSizeForAdd";
			this->textBoxSizeForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxSizeForAdd->TabIndex = 77;
			this->textBoxSizeForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSizeForAdd_TextChanged);
			// 
			// textBoxFeedbackForAddNewClothes
			// 
			this->textBoxFeedbackForAddNewClothes->Location = System::Drawing::Point(138, 357);
			this->textBoxFeedbackForAddNewClothes->Name = L"textBoxFeedbackForAddNewClothes";
			this->textBoxFeedbackForAddNewClothes->Size = System::Drawing::Size(98, 27);
			this->textBoxFeedbackForAddNewClothes->TabIndex = 82;
			this->textBoxFeedbackForAddNewClothes->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxFeedbackForAddNewClothes_TextChanged);
			// 
			// textBoxIDForRemuveInfoAboutClothes
			// 
			this->textBoxIDForRemuveInfoAboutClothes->Location = System::Drawing::Point(399, 49);
			this->textBoxIDForRemuveInfoAboutClothes->Name = L"textBoxIDForRemuveInfoAboutClothes";
			this->textBoxIDForRemuveInfoAboutClothes->Size = System::Drawing::Size(98, 27);
			this->textBoxIDForRemuveInfoAboutClothes->TabIndex = 41;
			this->textBoxIDForRemuveInfoAboutClothes->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxIDForRemuveInfoAboutClothes_TextChanged);
			// 
			// textBoxUserNameForAddNewClothes
			// 
			this->textBoxUserNameForAddNewClothes->Location = System::Drawing::Point(138, 329);
			this->textBoxUserNameForAddNewClothes->Name = L"textBoxUserNameForAddNewClothes";
			this->textBoxUserNameForAddNewClothes->Size = System::Drawing::Size(98, 27);
			this->textBoxUserNameForAddNewClothes->TabIndex = 81;
			this->textBoxUserNameForAddNewClothes->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxUserNameForAddNewClothes_TextChanged);
			// 
			// textBoxProducerForAdd
			// 
			this->textBoxProducerForAdd->Location = System::Drawing::Point(138, 273);
			this->textBoxProducerForAdd->Name = L"textBoxProducerForAdd";
			this->textBoxProducerForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxProducerForAdd->TabIndex = 80;
			this->textBoxProducerForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxProducerForAdd_TextChanged);
			// 
			// textBoxSeasonForAdd
			// 
			this->textBoxSeasonForAdd->Location = System::Drawing::Point(138, 245);
			this->textBoxSeasonForAdd->Name = L"textBoxSeasonForAdd";
			this->textBoxSeasonForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxSeasonForAdd->TabIndex = 79;
			this->textBoxSeasonForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSeasonForAdd_TextChanged);
			// 
			// textBoxCostForAdd
			// 
			this->textBoxCostForAdd->Location = System::Drawing::Point(138, 301);
			this->textBoxCostForAdd->Name = L"textBoxCostForAdd";
			this->textBoxCostForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxCostForAdd->TabIndex = 78;
			this->textBoxCostForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxCostForAdd_TextChanged);
			// 
			// textBoxGenderForAdd
			// 
			this->textBoxGenderForAdd->Location = System::Drawing::Point(138, 161);
			this->textBoxGenderForAdd->Name = L"textBoxGenderForAdd";
			this->textBoxGenderForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxGenderForAdd->TabIndex = 76;
			this->textBoxGenderForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxGenderForAdd_TextChanged);
			// 
			// textBoxColorForAdd
			// 
			this->textBoxColorForAdd->Location = System::Drawing::Point(138, 217);
			this->textBoxColorForAdd->Name = L"textBoxColorForAdd";
			this->textBoxColorForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxColorForAdd->TabIndex = 75;
			this->textBoxColorForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColorForAdd_TextChanged);
			// 
			// textBoxTypeForAdd
			// 
			this->textBoxTypeForAdd->Location = System::Drawing::Point(138, 105);
			this->textBoxTypeForAdd->Name = L"textBoxTypeForAdd";
			this->textBoxTypeForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxTypeForAdd->TabIndex = 74;
			this->textBoxTypeForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxTypeForAdd_TextChanged);
			// 
			// textBoxClothesNameForAdd
			// 
			this->textBoxClothesNameForAdd->Location = System::Drawing::Point(138, 77);
			this->textBoxClothesNameForAdd->Name = L"textBoxClothesNameForAdd";
			this->textBoxClothesNameForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxClothesNameForAdd->TabIndex = 73;
			this->textBoxClothesNameForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxClothesNameForAdd_TextChanged);
			// 
			// textBoxSubTypeForAdd
			// 
			this->textBoxSubTypeForAdd->Location = System::Drawing::Point(138, 133);
			this->textBoxSubTypeForAdd->Name = L"textBoxSubTypeForAdd";
			this->textBoxSubTypeForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxSubTypeForAdd->TabIndex = 72;
			this->textBoxSubTypeForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSubTypeForAdd_TextChanged);
			// 
			// textBoxIdForAdd
			// 
			this->textBoxIdForAdd->Location = System::Drawing::Point(138, 49);
			this->textBoxIdForAdd->Name = L"textBoxIdForAdd";
			this->textBoxIdForAdd->Size = System::Drawing::Size(98, 27);
			this->textBoxIdForAdd->TabIndex = 71;
			this->textBoxIdForAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxIdForAdd_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(373, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 19);
			this->label13->TabIndex = 42;
			this->label13->Text = L"ID";
			// 
			// RemuveInfoAboutClothes
			// 
			this->RemuveInfoAboutClothes->Location = System::Drawing::Point(399, 77);
			this->RemuveInfoAboutClothes->Name = L"RemuveInfoAboutClothes";
			this->RemuveInfoAboutClothes->Size = System::Drawing::Size(98, 49);
			this->RemuveInfoAboutClothes->TabIndex = 43;
			this->RemuveInfoAboutClothes->Text = L"Remove information about this garment";
			this->RemuveInfoAboutClothes->UseVisualStyleBackColor = true;
			this->RemuveInfoAboutClothes->Click += gcnew System::EventHandler(this, &MyForm::RemuveInfoAboutClothes_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(88, 57);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 19);
			this->label16->TabIndex = 47;
			this->label16->Text = L"ID*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 19);
			this->label15->TabIndex = 48;
			this->label15->Text = L"Clothing name*";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(73, 108);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 19);
			this->label14->TabIndex = 49;
			this->label14->Text = L"Type*";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(48, 141);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(75, 19);
			this->label19->TabIndex = 53;
			this->label19->Text = L"SubType*";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(55, 169);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 19);
			this->label18->TabIndex = 54;
			this->label18->Text = L"Gender*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(76, 197);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 19);
			this->label17->TabIndex = 55;
			this->label17->Text = L"Size*";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(65, 225);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 19);
			this->label22->TabIndex = 59;
			this->label22->Text = L"Color*";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(57, 253);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 19);
			this->label21->TabIndex = 60;
			this->label21->Text = L"Season*";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(42, 281);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(81, 19);
			this->label20->TabIndex = 61;
			this->label20->Text = L"Producer*";
			// 
			// buttonForAddingNewClothes
			// 
			this->buttonForAddingNewClothes->Location = System::Drawing::Point(242, 77);
			this->buttonForAddingNewClothes->Name = L"buttonForAddingNewClothes";
			this->buttonForAddingNewClothes->Size = System::Drawing::Size(98, 49);
			this->buttonForAddingNewClothes->TabIndex = 70;
			this->buttonForAddingNewClothes->Text = L"Adding new clothes";
			this->buttonForAddingNewClothes->UseVisualStyleBackColor = true;
			this->buttonForAddingNewClothes->Click += gcnew System::EventHandler(this, &MyForm::buttonForAddingNewClothes_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(73, 309);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(50, 19);
			this->label24->TabIndex = 64;
			this->label24->Text = L"Cost*";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(50, 363);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(73, 19);
			this->label25->TabIndex = 69;
			this->label25->Text = L"Feedback";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(57, 332);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 19);
			this->label23->TabIndex = 65;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(41, 332);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(82, 19);
			this->label26->TabIndex = 68;
			this->label26->Text = L"User name";
			// 
			// tabPage2jj
			// 
			this->tabPage2jj->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2jj->Controls->Add(this->label32);
			this->tabPage2jj->Controls->Add(this->label28);
			this->tabPage2jj->Controls->Add(this->label27);
			this->tabPage2jj->Controls->Add(this->textBoxFeedBack);
			this->tabPage2jj->Controls->Add(this->textBoxIDForChangeFeedback);
			this->tabPage2jj->Controls->Add(this->textBoxUserName);
			this->tabPage2jj->Controls->Add(this->textBoxUserNameForDeleteFeedback);
			this->tabPage2jj->Controls->Add(this->textBoxIdForDeleteFeedback);
			this->tabPage2jj->Controls->Add(this->textBoxId);
			this->tabPage2jj->Controls->Add(this->textBoxColor);
			this->tabPage2jj->Controls->Add(this->textBoxSize);
			this->tabPage2jj->Controls->Add(this->textBoxProduce);
			this->tabPage2jj->Controls->Add(this->textBoxSeason);
			this->tabPage2jj->Controls->Add(this->buttonAddFeedback);
			this->tabPage2jj->Controls->Add(this->label10);
			this->tabPage2jj->Controls->Add(this->label9);
			this->tabPage2jj->Controls->Add(this->label8);
			this->tabPage2jj->Controls->Add(this->label12);
			this->tabPage2jj->Controls->Add(this->label11);
			this->tabPage2jj->Controls->Add(this->buttonDeleteFeedback);
			this->tabPage2jj->Controls->Add(this->buttonChangeParams);
			this->tabPage2jj->Controls->Add(this->label3);
			this->tabPage2jj->Controls->Add(this->label4);
			this->tabPage2jj->Controls->Add(this->label5);
			this->tabPage2jj->Controls->Add(this->label6);
			this->tabPage2jj->Controls->Add(this->label7);
			this->tabPage2jj->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2jj->Location = System::Drawing::Point(4, 25);
			this->tabPage2jj->Name = L"tabPage2jj";
			this->tabPage2jj->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2jj->Size = System::Drawing::Size(572, 454);
			this->tabPage2jj->TabIndex = 1;
			this->tabPage2jj->Text = L"Change settings";
			this->tabPage2jj->Click += gcnew System::EventHandler(this, &MyForm::tabPage2jj_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(288, 243);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(161, 23);
			this->label32->TabIndex = 53;
			this->label32->Text = L"Remuve feedback";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(104, 243);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(126, 23);
			this->label28->TabIndex = 52;
			this->label28->Text = L"Add feedback";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(20, 21);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(144, 23);
			this->label27->TabIndex = 51;
			this->label27->Text = L"Change settings";
			// 
			// textBoxFeedBack
			// 
			this->textBoxFeedBack->Location = System::Drawing::Point(132, 340);
			this->textBoxFeedBack->Name = L"textBoxFeedBack";
			this->textBoxFeedBack->Size = System::Drawing::Size(98, 27);
			this->textBoxFeedBack->TabIndex = 40;
			// 
			// textBoxIDForChangeFeedback
			// 
			this->textBoxIDForChangeFeedback->Location = System::Drawing::Point(132, 284);
			this->textBoxIDForChangeFeedback->Name = L"textBoxIDForChangeFeedback";
			this->textBoxIDForChangeFeedback->Size = System::Drawing::Size(98, 27);
			this->textBoxIDForChangeFeedback->TabIndex = 41;
			this->textBoxIDForChangeFeedback->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxIDForChangeFeedback_TextChanged_1);
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(132, 312);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(98, 27);
			this->textBoxUserName->TabIndex = 42;
			// 
			// textBoxUserNameForDeleteFeedback
			// 
			this->textBoxUserNameForDeleteFeedback->Location = System::Drawing::Point(351, 316);
			this->textBoxUserNameForDeleteFeedback->Name = L"textBoxUserNameForDeleteFeedback";
			this->textBoxUserNameForDeleteFeedback->Size = System::Drawing::Size(98, 27);
			this->textBoxUserNameForDeleteFeedback->TabIndex = 47;
			// 
			// textBoxIdForDeleteFeedback
			// 
			this->textBoxIdForDeleteFeedback->Location = System::Drawing::Point(352, 287);
			this->textBoxIdForDeleteFeedback->Name = L"textBoxIdForDeleteFeedback";
			this->textBoxIdForDeleteFeedback->Size = System::Drawing::Size(98, 27);
			this->textBoxIdForDeleteFeedback->TabIndex = 46;
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(227, 86);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(98, 27);
			this->textBoxId->TabIndex = 15;
			this->textBoxId->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxId_TextChanged);
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(19, 86);
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(98, 27);
			this->textBoxColor->TabIndex = 17;
			this->textBoxColor->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColor_TextChanged);
			// 
			// textBoxSize
			// 
			this->textBoxSize->Location = System::Drawing::Point(123, 86);
			this->textBoxSize->Name = L"textBoxSize";
			this->textBoxSize->Size = System::Drawing::Size(98, 27);
			this->textBoxSize->TabIndex = 18;
			this->textBoxSize->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSize_TextChanged);
			// 
			// textBoxProduce
			// 
			this->textBoxProduce->Location = System::Drawing::Point(337, 86);
			this->textBoxProduce->Name = L"textBoxProduce";
			this->textBoxProduce->Size = System::Drawing::Size(98, 27);
			this->textBoxProduce->TabIndex = 19;
			this->textBoxProduce->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxProduce_TextChanged);
			// 
			// textBoxSeason
			// 
			this->textBoxSeason->Location = System::Drawing::Point(441, 86);
			this->textBoxSeason->Name = L"textBoxSeason";
			this->textBoxSeason->Size = System::Drawing::Size(98, 27);
			this->textBoxSeason->TabIndex = 24;
			this->textBoxSeason->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSeason_TextChanged);
			// 
			// buttonAddFeedback
			// 
			this->buttonAddFeedback->Location = System::Drawing::Point(132, 368);
			this->buttonAddFeedback->Name = L"buttonAddFeedback";
			this->buttonAddFeedback->Size = System::Drawing::Size(98, 49);
			this->buttonAddFeedback->TabIndex = 39;
			this->buttonAddFeedback->Text = L"Add feedback";
			this->buttonAddFeedback->UseVisualStyleBackColor = true;
			this->buttonAddFeedback->Click += gcnew System::EventHandler(this, &MyForm::buttonAddFeedback_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(99, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 19);
			this->label10->TabIndex = 43;
			this->label10->Text = L"ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 19);
			this->label9->TabIndex = 44;
			this->label9->Text = L"User name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 346);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 19);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Feedback";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(319, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 19);
			this->label12->TabIndex = 48;
			this->label12->Text = L"ID";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 319);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 19);
			this->label11->TabIndex = 49;
			this->label11->Text = L"User name";
			// 
			// buttonDeleteFeedback
			// 
			this->buttonDeleteFeedback->Location = System::Drawing::Point(351, 346);
			this->buttonDeleteFeedback->Name = L"buttonDeleteFeedback";
			this->buttonDeleteFeedback->Size = System::Drawing::Size(98, 47);
			this->buttonDeleteFeedback->TabIndex = 50;
			this->buttonDeleteFeedback->Text = L"Delete feedback";
			this->buttonDeleteFeedback->UseVisualStyleBackColor = true;
			this->buttonDeleteFeedback->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteFeedback_Click_1);
			// 
			// buttonChangeParams
			// 
			this->buttonChangeParams->Location = System::Drawing::Point(203, 119);
			this->buttonChangeParams->Name = L"buttonChangeParams";
			this->buttonChangeParams->Size = System::Drawing::Size(162, 61);
			this->buttonChangeParams->TabIndex = 23;
			this->buttonChangeParams->Text = L"Change parameters";
			this->buttonChangeParams->UseVisualStyleBackColor = true;
			this->buttonChangeParams->Click += gcnew System::EventHandler(this, &MyForm::buttonChangeParams_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(253, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 19);
			this->label3->TabIndex = 16;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 19);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(139, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 19);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Size";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(347, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Produce";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(451, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Season";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->textBoxType);
			this->tabPage1->Controls->Add(this->textBoxSubtype);
			this->tabPage1->Controls->Add(this->textBoxName);
			this->tabPage1->Controls->Add(this->Found);
			this->tabPage1->Controls->Add(this->lable3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(572, 454);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Search";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Beige;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView2->Location = System::Drawing::Point(6, 206);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(555, 241);
			this->dataGridView2->TabIndex = 84;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// textBoxType
			// 
			this->textBoxType->Location = System::Drawing::Point(220, 58);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(98, 27);
			this->textBoxType->TabIndex = 5;
			this->textBoxType->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxType_TextChanged);
			// 
			// textBoxSubtype
			// 
			this->textBoxSubtype->Location = System::Drawing::Point(363, 58);
			this->textBoxSubtype->Name = L"textBoxSubtype";
			this->textBoxSubtype->Size = System::Drawing::Size(98, 27);
			this->textBoxSubtype->TabIndex = 3;
			this->textBoxSubtype->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSubtype_TextChanged);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(71, 58);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(98, 27);
			this->textBoxName->TabIndex = 4;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxName_TextChanged);
			// 
			// Found
			// 
			this->Found->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Found->Location = System::Drawing::Point(200, 91);
			this->Found->Name = L"Found";
			this->Found->Size = System::Drawing::Size(145, 55);
			this->Found->TabIndex = 2;
			this->Found->Text = L"Find";
			this->Found->UseVisualStyleBackColor = true;
			this->Found->Click += gcnew System::EventHandler(this, &MyForm::Found_Click);
			// 
			// lable3
			// 
			this->lable3->AutoSize = true;
			this->lable3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lable3->Location = System::Drawing::Point(89, 33);
			this->lable3->Name = L"lable3";
			this->lable3->Size = System::Drawing::Size(56, 22);
			this->lable3->TabIndex = 6;
			this->lable3->Text = L"Name";
			this->lable3->Click += gcnew System::EventHandler(this, &MyForm::Name_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(237, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Type";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(376, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Subtype";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2jj);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(887, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(580, 483);
			this->tabControl1->TabIndex = 83;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1469, 513);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->checkBoxMan);
			this->Controls->Add(this->checkBoxWoman);
			this->Controls->Add(this->buttonDisplayByGender);
			this->Controls->Add(this->checkBoxGrowth);
			this->Controls->Add(this->checkBoxDecrease);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttom1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Clothes";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2jj->ResumeLayout(false);
			this->tabPage2jj->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Глобальні змінні
		DataTable^ table = gcnew DataTable();
		static int numClothes;
		Clothes* clothesList = nullptr;

		
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private:
	
	// Обробник події для кнопки, яка викликає заповнення даними та відображення їх у DataGridView
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DataBaseFill(clothesList, numClothes)) {
			dataGridView1->DataSource = DrucTable(clothesList, numClothes);
			table = DrucTable(clothesList, numClothes);			
		}
	
	}
	
	private: System::Void dataGridView1_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e) {	
	}
	// Функція для перевірки правильності данних при пошуку
private: System::Void VerifyForFound(string str) {	
	if (containsDigits(str)) {
			throw NumberWasEntered();
		}			
	if (ExceedingLimitSymbols(str)) {
		return;
	}	
}
//Функція для пошуку
bool SearchMatch(const std::string& searchText, const std::string& itemText) {
	std::string lowerSearchText = searchText;
	std::string lowerItemText = itemText;	
	std::transform(lowerSearchText.begin(), lowerSearchText.end(), lowerSearchText.begin(), ::tolower);
	std::transform(lowerItemText.begin(), lowerItemText.end(), lowerItemText.begin(), ::tolower);
	return searchText.empty() || (lowerItemText.find(lowerSearchText) != std::string::npos);
	
	
}

//Функція для пошуку по назві
bool NameFound(const std::string& name, Clothes* clothesList, int index) {
	return SearchMatch(name, clothesList[index].GetNameClothes());
}

//Функція для пошуку по типу
bool TypeFound(const std::string& type, Clothes* clothesList, int index) {
	return SearchMatch(type, clothesList[index].GetType());
}

//Функція для пошуку по підтипу
bool SubTypeFound(const std::string& subType, Clothes* clothesList, int index) {
	return SearchMatch(subType, clothesList[index].GetSubType());
}



//Функція для пошуку яка виводить інформацію на екран
private: System::Void FoundFunction() {
	bool checkCyrillic = false;
	try {
		if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxName->Text, "[а-яА-Я]")|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxType->Text, "[а-яА-Я]"))|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxSubtype->Text, "[а-яА-Я]")))) {
			throw TypicalTapeWithoutDigits();
		}
	}
	catch (const TypicalTapeWithoutDigits& e) {
		ShowErrorMessageBox(e);
		return;
	}
	std::string textNameStr = msclr::interop::marshal_as<std::string>(textBoxName->Text);
	std::string textTypeStr = msclr::interop::marshal_as<std::string>(textBoxType->Text);
	std::string textSubtypeStr = msclr::interop::marshal_as<std::string>(textBoxSubtype->Text);

	try {
		if (textNameStr.empty() && textTypeStr.empty() && textSubtypeStr.empty()) {
			throw TapeIsEmptyForFound();
		}
	}
	catch (const TapeIsEmptyForFound& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		VerifyForFound(textNameStr);
		VerifyForFound(textTypeStr);
		VerifyForFound(textSubtypeStr);
	}
	catch (const NumberWasEntered e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	DataTable^ table = CreateLable();
	int j = 0;
	bool elementIsNotExist = true;

	for (int i = 0; i < numClothes; i++) {
		bool nameMatch = NameFound(textNameStr, clothesList, i);
		bool typeMatch = TypeFound(textTypeStr, clothesList, i);
		bool subtypeMatch = SubTypeFound(textSubtypeStr, clothesList, i);

		if (nameMatch && typeMatch && subtypeMatch) {
			DataRow^ row = FillTable(clothesList, table, i, j);
			table->Rows->Add(row);
			j++;
			elementIsNotExist = false;
		}
	}
	try {
		if (elementIsNotExist) {
			throw DoesNotExist();
		}
	}
	catch (const DoesNotExist& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage, "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	dataGridView2->DataSource = table;
};

	
// Обробник події для кнопки, яка викликає пошук елементів
private: System::Void Found_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		FoundFunction();
	}
}
private: System::Void Name_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxType_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSubtype_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   
// Обробник події для кнопки, яка викликає функцію для сортування
private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (DataBaseFill(clothesList, numClothes)) {
		vector<int> IndexBySort;
		bool isWoman = checkBoxWoman->Checked;
		bool isMan = checkBoxMan->Checked;
		bool isGrowth = checkBoxGrowth->Checked;
		bool isDecrease = checkBoxDecrease->Checked;

		if (!checkBoxWoman->Checked && !checkBoxMan->Checked) {
			for (int i = 0; i < numClothes; i++) {
				IndexBySort.push_back(i);
			}
			dataGridView1->DataSource = Sort(isGrowth, isDecrease, isWoman, isMan, IndexBySort, numClothes, clothesList, table);
		}


		if (isWoman) {
			for (int i = 0; i < numClothes; i++) {
				if (clothesList[i].GetGender() == "Woman") {

					IndexBySort.push_back(i);
				}
			}
			dataGridView1->DataSource = Sort(isGrowth, isDecrease, isWoman, isMan, IndexBySort, numClothes, clothesList, table);
		}
		if (isMan) {
			for (int i = 0; i < numClothes; i++) {
				if (clothesList[i].GetGender() == "Man") {

					IndexBySort.push_back(i);
				}
			}
			dataGridView1->DataSource = Sort(isGrowth, isDecrease, isWoman, isMan, IndexBySort, numClothes, clothesList, table);
		}
	}
}
private: System::Void checkBoxGrowth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBoxDecrease_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBoxMan_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBoxWoman_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

// Обробник події для кнопк яка виводить одяг по гендеру
private: System::Void buttonDisplayByGender_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		DataTable^ table = CreateLable();
		int j = 0;
		bool isManChecked = checkBoxMan->Checked;
		bool isWomanChecked = checkBoxWoman->Checked;
		bool isNotMan = true, isNotWoman = true;
		try {
			if (!isManChecked && !isWomanChecked) {
				throw ChooseLeastOneGender();
			}
		}
		catch (const ChooseLeastOneGender& e) {
			String^ errorMessage = gcnew String(e.what());
			MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}


		for (int i = 0; i < numClothes; i++) {

			if (isManChecked && gcnew String(clothesList[i].GetGender().c_str()) == "Man") {
				DataRow^ row = FillTable(clothesList, table, i, j);
				table->Rows->Add(row);
				j++;
				isNotMan = false;
			}
			else if (isWomanChecked && gcnew String(clothesList[i].GetGender().c_str()) == "Woman") {
				DataRow^ row = FillTable(clothesList, table, i, j);

				table->Rows->Add(row);
				j++;
				isNotWoman = false;
			}
		}
		try {
			if (isNotMan && isManChecked) {
				throw ManClothesInDataBase();
			}
		}
		catch (const ManClothesInDataBase& e) {
			String^ errorMessage = gcnew String(e.what());
			MessageBox::Show(errorMessage, "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			if (isNotWoman && isWomanChecked) {
				throw WomanClothesInDataBase();
			}
		}
		catch (const WomanClothesInDataBase& e) {
			String^ errorMessage = gcnew String(e.what());
			MessageBox::Show(errorMessage, "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		dataGridView1->DataSource = table;

	}
}
private: System::Void textBoxId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxColor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSize_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxProduce_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


// Обробник події для кнопки який викликає функції для змінни параметрів об'єкта (розмір, колір, виробник, сезон) 
private: System::Void buttonChangeParams_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (DataBaseFill(clothesList, numClothes)) {
		try {
			if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxColor->Text, "[а-яА-Я]") || (System::Text::RegularExpressions::Regex::IsMatch(textBoxSize->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxSeason->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxProduce->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxId->Text, "[а-яА-Я]")))) {
				throw TypicalTapeWithoutDigits();
			}
		}
		catch (const TypicalTapeWithoutDigits& e) {
			ShowErrorMessageBox(e);
			return;
		}
		int ID;
		String^ inputText = textBoxId->Text;
		ID = IdVerification(inputText, clothesList, numClothes);		
		if (textBoxSize->Text == "" && textBoxColor->Text == "" && textBoxSeason->Text == "" && textBoxProduce->Text == "") {			
				try {
					throw TapeIsEmptyForFound();
				}
				catch (const TapeIsEmptyForFound& e) {
					ShowErrorMessageBox(e);
					return;
				}			
		}
		
		string colorParam = msclr::interop::marshal_as<std::string>(textBoxColor->Text);
		string sizeParam = msclr::interop::marshal_as<std::string>(textBoxSize->Text);
		string seasonParam = msclr::interop::marshal_as<std::string>(textBoxSeason->Text);
		string producerParam = msclr::interop::marshal_as<std::string>(textBoxProduce->Text);
		clothesList = ChangeParams(clothesList, numClothes, ID, colorParam, sizeParam);
		clothesList = ChangeParams(clothesList, numClothes, ID, colorParam, seasonParam, producerParam);

		table = DrucTable(clothesList, numClothes);
		dataGridView1->DataSource = table;
	}
}
private: System::Void textBoxSeason_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonRead_Click(System::Object^ sender, System::EventArgs^ e) {
	

	
}

private: System::Void buttonAddFeedback_Click(System::Object^ sender, System::EventArgs^ e) {	

}
private: System::Void textBoxIDForChangeFeedback_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxFeedBack_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	  
private: System::Void buttonDeleteFeedback_Click(System::Object^ sender, System::EventArgs^ e) {	
}

private: System::Void textBoxIdForDeleteFeedback_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxUserNameForDeleteFeedback_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
// Функція для зчитування даних з файлу за допомогою перевизначеного оператора виводу та викликає вікно для вибору файлу
	   void ReadFromFile() {
		   OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		   openFileDialog->RestoreDirectory = true;
		   openFileDialog->RestoreDirectory = true;

		   if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		   {
			   String^ fileName = openFileDialog->FileName;
			   string file = msclr::interop::marshal_as<std::string>(fileName);

			   std::fstream f(file);
			   if (f.is_open()) {
				   cout << "File is open" << endl;
			   }
			   else {
				   try {
					   throw OpenNotFile();
				   }
				   catch (const OpenNotFile& e) {
					   String^ errorMessage = gcnew String(e.what());
					   MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }
			   }

			   std::string extension = file.substr(file.find_last_of(".") + 1);
			   try {
				   if (extension != "txt") {
					   throw IncorrectFileExtension();
				   }
			   }
			   catch (const IncorrectFileExtension& e) {
				   ShowErrorMessageBox(e);
				   return;
			   }

			   try {
				   if (f.peek() == std::ifstream::traits_type::eof())
					   throw FileIsEmpty();
			   }
			   catch (const FileIsEmpty& e) {
				   String^ errorMessage = gcnew String(e.what());
				   MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }
			   Clothes clothes = Clothes();
			   vector<Clothes> clothesVector;
				fstream in(file);
				in >> clothesVector;
			   numClothes = clothesVector.size();			   
			   clothesList = new Clothes[numClothes];
			   for (int i = 0; i < numClothes; i++) {
				   clothesList[i] = Clothes(clothesVector[i].GetId(), clothesVector[i].GetNameClothes(), clothesVector[i].GetType(), clothesVector[i].GetSubType(),
					   clothesVector[i].GetGender(), clothesVector[i].GetSizeClothes(), clothesVector[i].GetColorClothes(), clothesVector[i].GetSeason(),
					   clothesVector[i].GetProducer(), clothesVector[i].GetCost(), clothesVector[i].GetResponse());
			   }
		   }
}

//Обробник події для кнопки яка знаходиться в контекстному меню та викликає функцію для зчитування з файлу
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadFromFile();	
	dataGridView1->DataSource = DrucTable(clothesList, numClothes);
	table = DrucTable(clothesList, numClothes);

}

//Обробник події для кнопки яка знаходиться в контекстному меню та викликає функцію для запису у файл
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (DataBaseFill(clothesList, numClothes)) {
		WriteData(clothesList, numClothes);
	}

}

//Обробник події для кнопки яка знаходиться в контекстному та викою функцію закривання програми
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

//Обробник події для кнопки яка знаходить в контекстному та викою функцію виведення повіломлення про технічну підтримку
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Our contact details\nWebsite - http://PZOption28.com \nTechnical support phone number: +38094567116142", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

	   // Обробник події для кнопки "ReadFile", яка викликає функцію читання з файлу та оновлює дані у DataGridView
private: System::Void ReadFile_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadFromFile();
	dataGridView1->DataSource = DrucTable(clothesList, numClothes);
	table = DrucTable(clothesList, numClothes);
}
private: System::Void SaveData_Click(System::Object^ sender, System::EventArgs^ e) {

}
// Обробник події для кнопки "SaveAs", яка викликає функцію збереження даних у файл
private: System::Void SaveAs_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		WriteData(clothesList, numClothes);
	}
}

// Обробник події для кнопки "Exit", яка закриває додаток при її натисканні
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   // Обробник події для кнопки "toolStripButton1", яка виводить повідомлення з контактною інформацією
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Our contact details\nWebsite - http://PZOption28.com \nTechnical support phone number: +38094567116142", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void textBoxIDForRemuveInfoAboutClothes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   // Обробник події для кнопки "RemuveInfoAboutClothes", яка видаляє інформацію про одяг за вказаним ідентифікатором
private: System::Void RemuveInfoAboutClothes_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		try {
			if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxIDForRemuveInfoAboutClothes->Text, "[а-яА-Я]"))) {
				throw TypicalTapeWithoutDigits();
			}
		}
		catch (const TypicalTapeWithoutDigits& e) {
			ShowErrorMessageBox(e);
			return;
		}
		int id;
		String^ TextID = textBoxIDForRemuveInfoAboutClothes->Text;
		numClothes = RemoveElement(clothesList, TextID, numClothes);
		dataGridView1->DataSource = DrucTable(clothesList, numClothes);
	}
}

private: System::Void textBoxIdForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxClothesNameForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxTypeForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSubTypeForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxGenderForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSizeForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxColorForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSeasonForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxProducerForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxCostForAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxUserNameForAddNewClothes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxFeedbackForAddNewClothes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

// Обробник події для кнопки "buttonForAddingNewClothes", яка додає новий одяг до бази даних
private: System::Void buttonForAddingNewClothes_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (DataBaseFill(clothesList, numClothes)) {
		try {
			if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxIdForAdd->Text, "[а-яА-Я]") || (System::Text::RegularExpressions::Regex::IsMatch(textBoxClothesNameForAdd->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxTypeForAdd->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxSubTypeForAdd->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxGenderForAdd->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxSizeForAdd->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxColorForAdd->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxSeasonForAdd->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxProducerForAdd->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxCostForAdd->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxUserNameForAddNewClothes->Text, "[а-яА-Я]")) || (System::Text::RegularExpressions::Regex::IsMatch(textBoxFeedbackForAddNewClothes->Text, "[а-яА-Я]")))) {
				throw TypicalTapeWithoutDigits();
			}
		}
		catch (const TypicalTapeWithoutDigits& e) {
			ShowErrorMessageBox(e);
			return;
		}
		string idstr = msclr::interop::marshal_as<std::string>(textBoxIdForAdd->Text);
		int id = 0;
		if (checkForAddingNewId(idstr, numClothes, clothesList)) {
			id = System::Convert::ToInt32(textBoxIdForAdd->Text);
		}
		std::string name = msclr::interop::marshal_as<std::string>(textBoxClothesNameForAdd->Text);
		std::string type = msclr::interop::marshal_as<std::string>(textBoxTypeForAdd->Text);
		std::string subtype = msclr::interop::marshal_as<std::string>(textBoxSubTypeForAdd->Text);
		std::string gender = msclr::interop::marshal_as<std::string>(textBoxGenderForAdd->Text);
		std::string size = msclr::interop::marshal_as<std::string>(textBoxSizeForAdd->Text);
		std::string color = msclr::interop::marshal_as<std::string>(textBoxColorForAdd->Text);
		std::string season = msclr::interop::marshal_as<std::string>(textBoxSeasonForAdd->Text);
		std::string producer = msclr::interop::marshal_as<std::string>(textBoxProducerForAdd->Text);

		double cost;
		bool chackCost = false;
		std::string priceStdString = msclr::interop::marshal_as<std::string>(textBoxCostForAdd->Text);
		if (checkCostField(priceStdString)) {
			std::replace(priceStdString.begin(), priceStdString.end(), ',', '.');
			cost = std::stod(priceStdString);
			chackCost = true;
		}
		std::string UserName = msclr::interop::marshal_as<std::string>(textBoxUserNameForAddNewClothes->Text);
		std::string FeedBack = msclr::interop::marshal_as<std::string>(textBoxFeedbackForAddNewClothes->Text);
		std::string responce = "";
		if (UserName != "" || FeedBack != "") {
			try {
				if (UserName.empty())
					throw IsFieldFilled();
			}
			catch (const IsFieldFilled& e) {
				String^ errorMessage = gcnew String(e.what());
				MessageBox::Show(errorMessage + "User name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			try {
				if (FeedBack.empty())
					throw IsFieldFilled();
			}
			catch (const IsFieldFilled& e) {
				String^ errorMessage = gcnew String(e.what());
				MessageBox::Show(errorMessage + "Feedback", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			responce = UserName + "-" + FeedBack + "\n";
		}
		if (chackCost && id != 0 && checkField(id, name, type, subtype, gender, size, color, season, producer, cost, UserName, FeedBack)) {


			string convertToNormaForm = " ";
			for (int i = 1; i < gender.size(); i++) {
				convertToNormaForm += tolower(gender[i]);
			}
			convertToNormaForm[0] = toupper(gender[0]);
			gender = convertToNormaForm;
			Clothes newClothes(id, name, type, subtype, gender, size, color, season, producer, cost, responce);


			Clothes* newClothesList = new Clothes[numClothes + 1];

			for (int i = 0; i < numClothes; i++) {
				newClothesList[i] = clothesList[i];
			}

			newClothesList[numClothes] = newClothes;

			numClothes++;

			delete[] clothesList;

			clothesList = newClothesList;
			MessageBox::Show("New product with Id " + id + " has been successfully added ", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
			dataGridView1->DataSource = DrucTable(clothesList, numClothes);
		}
	}

}
private: System::Void hhbToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

// Обробник події для елемента меню "readToolStripMenuItem1", який викликає функцію читання з файлу
private: System::Void readToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadFromFile();
	dataGridView1->DataSource = DrucTable(clothesList, numClothes);
	table = DrucTable(clothesList, numClothes);
}

// Обробник події для елемента меню "saveToolStripMenuItem", який викликає функцію збереження даних в файл
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		WriteData(clothesList, numClothes);
	}
}
private: System::Void checkAllFieldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

// Обробник події для елемента меню "clearToolStripMenuItem", який очищує дані та таблицю
private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Clothes ClothesTable;
	table = ClothesTable.ClearTable(table);
	dataGridView1->DataSource = table;
	clothesList = nullptr;
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void tabPage2jj_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}

// Обробник події для кнопки "buttonAddFeedback_Click_1", який додає новий відгук користувача
private: System::Void buttonAddFeedback_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		try {
			if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxIDForChangeFeedback->Text, "[а-яА-Я]") || (System::Text::RegularExpressions::Regex::IsMatch(textBoxUserName->Text, "[а-яА-Я]"))
				|| (System::Text::RegularExpressions::Regex::IsMatch(textBoxFeedBack->Text, "[а-яА-Я]")))) {
				throw TypicalTapeWithoutDigits();
			}
		}
		catch (const TypicalTapeWithoutDigits& e) {
			ShowErrorMessageBox(e);
			return;
		}
		int id;
		String^ TextID = textBoxIDForChangeFeedback->Text;
		id = IdVerification(TextID, clothesList, numClothes);



		string UserName = msclr::interop::marshal_as<std::string>(textBoxUserName->Text);
		bool resulСhecks = IdUserName(UserName);

		string FeedBack = msclr::interop::marshal_as<std::string>(textBoxFeedBack->Text);
		if (FeedBack.empty()) {
			try {
				throw IsFieldFilled();
			}
			catch (const IsFieldFilled& e) {
				String^ errorMessage = gcnew String(e.what());
				MessageBox::Show(errorMessage + " 'Feedback'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			resulСhecks = false;
		}
		if (resulСhecks) {
			AddNewFeedback(id, numClothes, clothesList, UserName, FeedBack);
			MessageBox::Show("User feedback has been successfully added to the product with Id " + id + "\nClick the Update button to see the result", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}	
}

// Обробник події для кнопки "buttonDeleteFeedback_Click_1", який видаляє відгук користувача
private: System::Void buttonDeleteFeedback_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (DataBaseFill(clothesList, numClothes)) {
		try {
			if ((System::Text::RegularExpressions::Regex::IsMatch(textBoxIdForDeleteFeedback->Text, "[а-яА-Я]") || (System::Text::RegularExpressions::Regex::IsMatch(textBoxUserNameForDeleteFeedback->Text, "[а-яА-Я]")))) {
				throw TypicalTapeWithoutDigits();
			}
		}
		catch (const TypicalTapeWithoutDigits& e) {
			ShowErrorMessageBox(e);
			return;
		}
		int id;
		String^ inputText = textBoxIdForDeleteFeedback->Text;
		id = IdVerification(inputText, clothesList, numClothes);

		string UserName = msclr::interop::marshal_as<std::string>(textBoxUserNameForDeleteFeedback->Text);
		bool resulСhecks = IdUserName(UserName);


		if (resulСhecks) {
			bool UserIsList = true;
			for (int i = 0; i < numClothes; i++) {
				size_t userNameIndex = clothesList[i].GetResponse().find(UserName);
				if (userNameIndex != std::string::npos) {
					UserIsList = false;
				}
			}

			try {
				if (UserIsList)
					throw UserNotExist();
			}
			catch (const UserNotExist& e) {
				ShowErrorMessageBox(e);
				return;
			}
			DeleteFeedBack(clothesList, numClothes, id, UserName);
		}
	}
}
private: System::Void textBoxIDForChangeFeedback_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

