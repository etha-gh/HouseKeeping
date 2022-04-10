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
	/// Form1 の概要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
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
	private: System::Windows::Forms::ToolStripMenuItem^  ファイルFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  終了XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  編集EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  追加AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  変更CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  削除DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  表示VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  一覧表示LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  集計表示SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ヘルプHToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  バージョン情報VToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabList;
	private: System::Windows::Forms::TabPage^  tabSummary;
	private: System::Windows::Forms::DataGridView^  sumDgv;





	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->mainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->ファイルFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->終了XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->編集EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->追加AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->変更CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->削除DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->表示VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->一覧表示LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->集計表示SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ヘルプHToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->バージョン情報VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->ファイルFToolStripMenuItem,
					this->編集EToolStripMenuItem, this->表示VToolStripMenuItem, this->ヘルプHToolStripMenuItem
			});
			this->mainMenu->Location = System::Drawing::Point(0, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->Size = System::Drawing::Size(384, 24);
			this->mainMenu->TabIndex = 1;
			this->mainMenu->Text = L"menuStrip1";
			// 
			// ファイルFToolStripMenuItem
			// 
			this->ファイルFToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->保存SToolStripMenuItem,
					this->toolStripSeparator1, this->終了XToolStripMenuItem
			});
			this->ファイルFToolStripMenuItem->Name = L"ファイルFToolStripMenuItem";
			this->ファイルFToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->ファイルFToolStripMenuItem->Text = L"ファイル(&F)";
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::保存SToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(110, 6);
			// 
			// 終了XToolStripMenuItem
			// 
			this->終了XToolStripMenuItem->Name = L"終了XToolStripMenuItem";
			this->終了XToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->終了XToolStripMenuItem->Text = L"終了(&X)";
			this->終了XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::終了XToolStripMenuItem_Click);
			// 
			// 編集EToolStripMenuItem
			// 
			this->編集EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->追加AToolStripMenuItem,
					this->変更CToolStripMenuItem, this->削除DToolStripMenuItem
			});
			this->編集EToolStripMenuItem->Name = L"編集EToolStripMenuItem";
			this->編集EToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->編集EToolStripMenuItem->Text = L"編集(&E)";
			// 
			// 追加AToolStripMenuItem
			// 
			this->追加AToolStripMenuItem->Name = L"追加AToolStripMenuItem";
			this->追加AToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->追加AToolStripMenuItem->Text = L"追加(&A)";
			this->追加AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::追加AToolStripMenuItem_Click);
			// 
			// 変更CToolStripMenuItem
			// 
			this->変更CToolStripMenuItem->Name = L"変更CToolStripMenuItem";
			this->変更CToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->変更CToolStripMenuItem->Text = L"変更(&C)";
			this->変更CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::変更CToolStripMenuItem_Click);
			// 
			// 削除DToolStripMenuItem
			// 
			this->削除DToolStripMenuItem->Name = L"削除DToolStripMenuItem";
			this->削除DToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->削除DToolStripMenuItem->Text = L"削除(&D)";
			this->削除DToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::削除DToolStripMenuItem_Click);
			// 
			// 表示VToolStripMenuItem
			// 
			this->表示VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->一覧表示LToolStripMenuItem,
					this->集計表示SToolStripMenuItem
			});
			this->表示VToolStripMenuItem->Name = L"表示VToolStripMenuItem";
			this->表示VToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->表示VToolStripMenuItem->Text = L"表示(&V)";
			// 
			// 一覧表示LToolStripMenuItem
			// 
			this->一覧表示LToolStripMenuItem->Name = L"一覧表示LToolStripMenuItem";
			this->一覧表示LToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->一覧表示LToolStripMenuItem->Text = L"一覧表示(&L)";
			this->一覧表示LToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::一覧表示LToolStripMenuItem_Click);
			// 
			// 集計表示SToolStripMenuItem
			// 
			this->集計表示SToolStripMenuItem->Name = L"集計表示SToolStripMenuItem";
			this->集計表示SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->集計表示SToolStripMenuItem->Text = L"集計表示(&S)";
			this->集計表示SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::集計表示SToolStripMenuItem_Click);
			// 
			// ヘルプHToolStripMenuItem
			// 
			this->ヘルプHToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->バージョン情報VToolStripMenuItem });
			this->ヘルプHToolStripMenuItem->Name = L"ヘルプHToolStripMenuItem";
			this->ヘルプHToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ヘルプHToolStripMenuItem->Text = L"ヘルプ(&H)";
			// 
			// バージョン情報VToolStripMenuItem
			// 
			this->バージョン情報VToolStripMenuItem->Name = L"バージョン情報VToolStripMenuItem";
			this->バージョン情報VToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->バージョン情報VToolStripMenuItem->Text = L"バージョン情報(&V)";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(6, 219);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"追加";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(87, 219);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(75, 23);
			this->buttonChange->TabIndex = 3;
			this->buttonChange->Text = L"変更";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &Form1::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(168, 219);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"削除";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// buttonEnd
			// 
			this->buttonEnd->Location = System::Drawing::Point(271, 219);
			this->buttonEnd->Name = L"buttonEnd";
			this->buttonEnd->Size = System::Drawing::Size(75, 23);
			this->buttonEnd->TabIndex = 5;
			this->buttonEnd->Text = L"終了";
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
			this->tabList->Text = L"一覧表示";
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
			this->tabSummary->Text = L"集計表示";
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
			this->Text = L"簡易家計簿";
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
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("給料", "入金");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("食費", "出金");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("雑費", "出金");
	categoryDataSet->CategoryDataTable->AddCategoryDataTableRow("住居", "出金");

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
private: System::Void 追加AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddData();
}
private: System::Void buttonEnd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 終了XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void SaveData()
{
	String^ path = "MoneyData.csv"; //出力ファイル名
	String^ strData = "";           //1行分のデータ
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(
		path,
		false,
		System::Text::Encoding::Default);
	for each (DataRow^ drMoney
		in moneyDataSet->Tables["moneyDataTable"]->Rows)
	{
		strData = drMoney["日付"]->ToString() + ","
			+ drMoney["分類"] + ","
			+ drMoney["品名"] + ","
			+ drMoney["金額"]->ToString() + ","
			+ drMoney["備考"];
		sw->WriteLine(strData);
	}
	sw->Close();    // ファイルを閉じる
}
private: System::Void 保存SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveData();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	SaveData();
}
private: System::Void LoadData() {
	String^ path = "MoneyData.csv"; // 入力ファイル名
	// 区切り文字を指定するための準備
	String^ strDelimiter = ",";
	array<Char>^ delimiter = strDelimiter->ToCharArray();
	array<String^>^ strData; // 分解後の文字の入れ物
	String^ strLine; // 1行分のデータ
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
private: System::Void 変更CToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private:System::Void DeleteData()
{
	int nowRow = dgv->CurrentRow->Index;
	dgv->Rows->RemoveAt(nowRow); // 現在行を削除
}
private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void 削除DToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void CalcSummary() {
	String^ expression;
	summaryDataSet->SumDataTable->Clear();
	for each (MoneyDataSet::moneyDataTableRow^ drMoney
		in moneyDataSet->moneyDataTable)
	{
		expression = "日付= '" + drMoney->日付.ToShortDateString() + "'";
		array<SummaryDataSet::SumDataTableRow^>^ curDR
			= (array<SummaryDataSet::SumDataTableRow^>^)
			summaryDataSet->SumDataTable->Select(expression);
		if (curDR->Length == 0)
		{
			array<CategoryDataSet::CategoryDataTableRow^>^ selectedDataRow;
			selectedDataRow = (array<CategoryDataSet::CategoryDataTableRow^>^)
				categoryDataSet->CategoryDataTable->Select(
					"分類='" + drMoney->分類 + "'");
			if (selectedDataRow[0]->入出金分類 == "入金")
			{
				summaryDataSet->SumDataTable->AddSumDataTableRow(
					drMoney->日付, drMoney->金額, 0);
			}
			else if (selectedDataRow[0]->入出金分類 == "出金")
			{
				summaryDataSet->SumDataTable->AddSumDataTableRow(
					drMoney->日付, 0, drMoney->金額);
			}
		}
		else
		{
			array<CategoryDataSet::CategoryDataTableRow^>^ selectedDataRow;
			selectedDataRow = (array<CategoryDataSet::CategoryDataTableRow^>^)
				categoryDataSet->CategoryDataTable->Select(
					"分類='" + drMoney->分類 + "'");
			if (selectedDataRow[0]->入出金分類 == "入金")
			{
				curDR[0]->入金合計 = curDR[0]->入金合計 + drMoney->金額;
			}
			else if (selectedDataRow[0]->入出金分類 == "出金")
			{
				curDR[0]->出金合計 = curDR[0]->出金合計 + (int)drMoney->金額;
			}
		}
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	CalcSummary();
}
private: System::Void 一覧表示LToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabList);
}
private: System::Void 集計表示SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabSummary);
}
};
}
