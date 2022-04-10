#pragma once

#include "ItemForm.h"

namespace MyHousekeepingBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 �̊T�v
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgv;
	protected:
	private: System::Windows::Forms::MenuStrip^  mainMenu;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonChange;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::Button^  buttonEnd;
	private: System::Windows::Forms::ToolStripMenuItem^  �t�@�C��FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ۑ�SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  �I��XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ҏWEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ǉ�AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ύXCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �폜DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �\��VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ꗗ�\��LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �W�v�\��SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �w���vHToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �o�[�W�������VToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabList;
	private: System::Windows::Forms::TabPage^  tabSummary;
	private: System::Windows::Forms::DataGridView^  sumDgv;





	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->mainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->�t�@�C��FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ۑ�SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�I��XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ҏWEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ǉ�AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ύXCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�폜DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�\��VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ꗗ�\��LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�W�v�\��SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�w���vHToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�o�[�W�������VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonEnd = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabList = (gcnew System::Windows::Forms::TabPage());
			this->tabSummary = (gcnew System::Windows::Forms::TabPage());
			this->sumDgv = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->mainMenu->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabList->SuspendLayout();
			this->tabSummary->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sumDgv))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv
			// 
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(6, 6);
			this->dgv->Name = L"dgv";
			this->dgv->RowTemplate->Height = 21;
			this->dgv->Size = System::Drawing::Size(340, 207);
			this->dgv->TabIndex = 0;
			// 
			// mainMenu
			// 
			this->mainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�t�@�C��FToolStripMenuItem,
					this->�ҏWEToolStripMenuItem, this->�\��VToolStripMenuItem, this->�w���vHToolStripMenuItem
			});
			this->mainMenu->Location = System::Drawing::Point(0, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->Size = System::Drawing::Size(384, 24);
			this->mainMenu->TabIndex = 1;
			this->mainMenu->Text = L"menuStrip1";
			// 
			// �t�@�C��FToolStripMenuItem
			// 
			this->�t�@�C��FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ۑ�SToolStripMenuItem,
					this->toolStripSeparator1, this->�I��XToolStripMenuItem
			});
			this->�t�@�C��FToolStripMenuItem->Name = L"�t�@�C��FToolStripMenuItem";
			this->�t�@�C��FToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->�t�@�C��FToolStripMenuItem->Text = L"�t�@�C��(&F)";
			// 
			// �ۑ�SToolStripMenuItem
			// 
			this->�ۑ�SToolStripMenuItem->Name = L"�ۑ�SToolStripMenuItem";
			this->�ۑ�SToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->�ۑ�SToolStripMenuItem->Text = L"�ۑ�(&S)";
			this->�ۑ�SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ۑ�SToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(110, 6);
			// 
			// �I��XToolStripMenuItem
			// 
			this->�I��XToolStripMenuItem->Name = L"�I��XToolStripMenuItem";
			this->�I��XToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->�I��XToolStripMenuItem->Text = L"�I��(&X)";
			this->�I��XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�I��XToolStripMenuItem_Click);
			// 
			// �ҏWEToolStripMenuItem
			// 
			this->�ҏWEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ǉ�AToolStripMenuItem,
					this->�ύXCToolStripMenuItem, this->�폜DToolStripMenuItem
			});
			this->�ҏWEToolStripMenuItem->Name = L"�ҏWEToolStripMenuItem";
			this->�ҏWEToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->�ҏWEToolStripMenuItem->Text = L"�ҏW(&E)";
			// 
			// �ǉ�AToolStripMenuItem
			// 
			this->�ǉ�AToolStripMenuItem->Name = L"�ǉ�AToolStripMenuItem";
			this->�ǉ�AToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�ǉ�AToolStripMenuItem->Text = L"�ǉ�(&A)";
			this->�ǉ�AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ǉ�AToolStripMenuItem_Click);
			// 
			// �ύXCToolStripMenuItem
			// 
			this->�ύXCToolStripMenuItem->Name = L"�ύXCToolStripMenuItem";
			this->�ύXCToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�ύXCToolStripMenuItem->Text = L"�ύX(&C)";
			this->�ύXCToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ύXCToolStripMenuItem_Click);
			// 
			// �폜DToolStripMenuItem
			// 
			this->�폜DToolStripMenuItem->Name = L"�폜DToolStripMenuItem";
			this->�폜DToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�폜DToolStripMenuItem->Text = L"�폜(&D)";
			this->�폜DToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�폜DToolStripMenuItem_Click);
			// 
			// �\��VToolStripMenuItem
			// 
			this->�\��VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�ꗗ�\��LToolStripMenuItem,
					this->�W�v�\��SToolStripMenuItem
			});
			this->�\��VToolStripMenuItem->Name = L"�\��VToolStripMenuItem";
			this->�\��VToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�\��VToolStripMenuItem->Text = L"�\��(&V)";
			// 
			// �ꗗ�\��LToolStripMenuItem
			// 
			this->�ꗗ�\��LToolStripMenuItem->Name = L"�ꗗ�\��LToolStripMenuItem";
			this->�ꗗ�\��LToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�ꗗ�\��LToolStripMenuItem->Text = L"�ꗗ�\��(&L)";
			this->�ꗗ�\��LToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ꗗ�\��LToolStripMenuItem_Click);
			// 
			// �W�v�\��SToolStripMenuItem
			// 
			this->�W�v�\��SToolStripMenuItem->Name = L"�W�v�\��SToolStripMenuItem";
			this->�W�v�\��SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�W�v�\��SToolStripMenuItem->Text = L"�W�v�\��(&S)";
			this->�W�v�\��SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�W�v�\��SToolStripMenuItem_Click);
			// 
			// �w���vHToolStripMenuItem
			// 
			this->�w���vHToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�o�[�W�������VToolStripMenuItem });
			this->�w���vHToolStripMenuItem->Name = L"�w���vHToolStripMenuItem";
			this->�w���vHToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�w���vHToolStripMenuItem->Text = L"�w���v(&H)";
			// 
			// �o�[�W�������VToolStripMenuItem
			// 
			this->�o�[�W�������VToolStripMenuItem->Name = L"�o�[�W�������VToolStripMenuItem";
			this->�o�[�W�������VToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->�o�[�W�������VToolStripMenuItem->Text = L"�o�[�W�������(&V)";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(6, 219);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"�ǉ�";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(87, 219);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(75, 23);
			this->buttonChange->TabIndex = 3;
			this->buttonChange->Text = L"�ύX";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &Form1::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(168, 219);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"�폜";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// buttonEnd
			// 
			this->buttonEnd->Location = System::Drawing::Point(271, 219);
			this->buttonEnd->Name = L"buttonEnd";
			this->buttonEnd->Size = System::Drawing::Size(75, 23);
			this->buttonEnd->TabIndex = 5;
			this->buttonEnd->Text = L"�I��";
			this->buttonEnd->UseVisualStyleBackColor = true;
			this->buttonEnd->Click += gcnew System::EventHandler(this, &Form1::buttonEnd_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabList);
			this->tabControl1->Controls->Add(this->tabSummary);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(360, 274);
			this->tabControl1->TabIndex = 6;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// tabList
			// 
			this->tabList->Controls->Add(this->dgv);
			this->tabList->Controls->Add(this->buttonEnd);
			this->tabList->Controls->Add(this->buttonAdd);
			this->tabList->Controls->Add(this->buttonDelete);
			this->tabList->Controls->Add(this->buttonChange);
			this->tabList->Location = System::Drawing::Point(4, 22);
			this->tabList->Name = L"tabList";
			this->tabList->Padding = System::Windows::Forms::Padding(3);
			this->tabList->Size = System::Drawing::Size(352, 248);
			this->tabList->TabIndex = 0;
			this->tabList->Text = L"�ꗗ�\��";
			this->tabList->UseVisualStyleBackColor = true;
			// 
			// tabSummary
			// 
			this->tabSummary->Controls->Add(this->sumDgv);
			this->tabSummary->Location = System::Drawing::Point(4, 22);
			this->tabSummary->Name = L"tabSummary";
			this->tabSummary->Padding = System::Windows::Forms::Padding(3);
			this->tabSummary->Size = System::Drawing::Size(352, 248);
			this->tabSummary->TabIndex = 1;
			this->tabSummary->Text = L"�W�v�\��";
			this->tabSummary->UseVisualStyleBackColor = true;
			// 
			// sumDgv
			// 
			this->sumDgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sumDgv->Location = System::Drawing::Point(6, 6);
			this->sumDgv->Name = L"sumDgv";
			this->sumDgv->RowTemplate->Height = 21;
			this->sumDgv->Size = System::Drawing::Size(340, 236);
			this->sumDgv->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 306);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->mainMenu);
			this->MainMenuStrip = this->mainMenu;
			this->Name = L"Form1";
			this->Text = L"�ȈՉƌv��";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->mainMenu->ResumeLayout(false);
			this->mainMenu->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabList->ResumeLayout(false);
			this->tabSummary->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sumDgv))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: MoneyDataSet^ moneyDataSet;
private: CategoryDataSet^ categoryDataSet;
private: SummaryDataSet^ summaryDataSet;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	moneyDataSet = gcnew MoneyDataSet();
	dgv->DataSource = moneyDataSet->moneyDataTable;

	categoryDataSet = gcnew CategoryDataSet();
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("����", "����");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("�H��", "�o��");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("�G��", "�o��");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("�Z��", "�o��");

	summaryDataSet = gcnew SummaryDataSet();
	sumDgv->DataSource = summaryDataSet->SumDataTable;

	LoadData();
}
private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	AddData();
}
private: System::Void AddData() {
	ItemForm^ frmItem = gcnew ItemForm(categoryDataSet);
	frmItem->ShowDialog();
	if (frmItem->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		moneyDataSet->moneyDataTable->AddmoneyDataTableRow(
			frmItem->monCalendar->SelectionRange->Start,
			frmItem->cmbCategory->Text,
			frmItem->txtItem->Text,
			int::Parse(frmItem->mtxtMoney->Text),
			frmItem->txtRemarks->Text);
	}
}
private: System::Void �ǉ�AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddData();
}
private: System::Void buttonEnd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void �I��XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void SaveData()
{
	String^ path = "MoneyData.csv"; //�o�̓t�@�C����
	String^ strData = "";           //1�s���̃f�[�^
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(
		path,
		false,
		System::Text::Encoding::Default);
	for each (DataRow^ drMoney
		in moneyDataSet->Tables["moneyDataTable"]->Rows)
	{
		strData = drMoney["���t"]->ToString() + ","
			+ drMoney["����"] + ","
			+ drMoney["�i��"] + ","
			+ drMoney["���z"]->ToString() + ","
			+ drMoney["���l"];
		sw->WriteLine(strData);
	}
	sw->Close();    // �t�@�C�������
}
private: System::Void �ۑ�SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveData();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	SaveData();
}
private: System::Void LoadData() {
	String^ path = "MoneyData.csv"; // ���̓t�@�C����
	// ��؂蕶�����w�肷�邽�߂̏���
	String^ strDelimiter = ",";
	array<Char>^ delimiter = strDelimiter->ToCharArray();
	array<String^>^ strData; // ������̕����̓��ꕨ
	String^ strLine; // 1�s���̃f�[�^
	Boolean fileExists = System::IO::File::Exists(path);
	if (fileExists)
	{
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(
			path, System::Text::Encoding::Default);
		while (sr->Peek() >= 0)
		{
			strLine = sr->ReadLine();
			strData = strLine->Split(delimiter);
			moneyDataSet->moneyDataTable->AddmoneyDataTableRow(
				DateTime::Parse(strData[0]),
				strData[1],
				strData[2],
				int::Parse(strData[3]),
				strData[4]);
		}
		sr->Close();
	}
}
private: System::Void UpdateData() {
	int nowRow = dgv->CurrentRow->Index;
	DateTime oldDate = DateTime::Parse(
		dgv->Rows[nowRow]->Cells[0]->Value->ToString());
	String^ oldCategory = dgv->Rows[nowRow]->Cells[1]->Value->ToString();
	String^ oldItem = dgv->Rows[nowRow]->Cells[2]->Value->ToString();
	int oldMoney = int::Parse(dgv->Rows[nowRow]->Cells[3]->Value->ToString());
	String^ oldRemarks = dgv->Rows[nowRow]->Cells[4]->Value->ToString();
	ItemForm^ frmItem = gcnew ItemForm(
		categoryDataSet, oldDate, oldCategory, oldItem, oldMoney, oldRemarks);
	frmItem->ShowDialog();
	if (frmItem->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		dgv->Rows[nowRow]->Cells[0]->Value = frmItem->monCalendar->SelectionRange->Start;
		dgv->Rows[nowRow]->Cells[1]->Value = frmItem->cmbCategory->Text;
		dgv->Rows[nowRow]->Cells[2]->Value = frmItem->txtItem->Text;
		dgv->Rows[nowRow]->Cells[3]->Value = int::Parse(frmItem->mtxtMoney->Text);
		dgv->Rows[nowRow]->Cells[4]->Value = frmItem->txtRemarks->Text;
	}
}
private: System::Void buttonChange_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private: System::Void �ύXCToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private:System::Void DeleteData()
{
	int nowRow = dgv->CurrentRow->Index;
	dgv->Rows->RemoveAt(nowRow); // ���ݍs���폜
}
private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void �폜DToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void CalcSummary() {
	String^ expression;
	summaryDataSet->SumDataTable->Clear();
	for each (MoneyDataSet::moneyDataTableRow^ drMoney
		in moneyDataSet->moneyDataTable)
	{
		expression = "���t= '" + drMoney->���t.ToShortDateString() + "'";
		array<SummaryDataSet::SumDataTableRow^>^ curDR
			= (array<SummaryDataSet::SumDataTableRow^>^)
			summaryDataSet->SumDataTable->Select(expression);
		if (curDR->Length == 0)
		{
			array<CategoryDataSet::CategoryDataTableRow^>^ selectedDataRow;
			selectedDataRow = (array<CategoryDataSet::CategoryDataTableRow^>^)
				categoryDataSet->CategoryDataTable->Select(
					"����='" + drMoney->���� + "'");
			if (selectedDataRow[0]->���o������ == "����")
			{
				summaryDataSet->SumDataTable->AddSumDataTableRow(
					drMoney->���t, drMoney->���z, 0);
			}
			else if (selectedDataRow[0]->���o������ == "�o��")
			{
				summaryDataSet->SumDataTable->AddSumDataTableRow(
					drMoney->���t, 0, drMoney->���z);
			}
		}
		else
		{
			array<CategoryDataSet::CategoryDataTableRow^>^ selectedDataRow;
			selectedDataRow = (array<CategoryDataSet::CategoryDataTableRow^>^)
				categoryDataSet->CategoryDataTable->Select(
					"����='" + drMoney->���� + "'");
			if (selectedDataRow[0]->���o������ == "����")
			{
				curDR[0]->�������v = curDR[0]->�������v + drMoney->���z;
			}
			else if (selectedDataRow[0]->���o������ == "�o��")
			{
				curDR[0]->�o�����v = curDR[0]->�o�����v + (int)drMoney->���z;
			}
		}
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	CalcSummary();
}
private: System::Void �ꗗ�\��LToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabList);
}
private: System::Void �W�v�\��SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabSummary);
}
};
}
