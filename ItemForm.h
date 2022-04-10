#pragma once

namespace MyHousekeepingBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ItemForm �̊T�v
	/// </summary>
	public ref class ItemForm : public System::Windows::Forms::Form
	{
	public:
		ItemForm(CategoryDataSet^ dsCategory)
		{
			InitializeComponent();
			cmbCategory->DataSource = dsCategory->CategoryDataTable;
			cmbCategory->DisplayMember = "����";
		}
	public: ItemForm(CategoryDataSet^ dsCategory,	//��1�����B���ވꗗ�i�f�[�^�Z�b�g�j
					 DateTime nowDate,				//��2�����B���t�i���t�^�j
					 String^ category,				//��3�����B���ށi������^�j
					 String^ item,					//��4�����B�i���i������^�j
					 int money,						//��5�����B���z�i�����^�j
					 String^ remarks)				//��6�����B���l�i������^�j
	{
		InitializeComponent();                     //����������
		cmbCategory->DataSource = dsCategory->CategoryDataTable;
		cmbCategory->DisplayMember = "����";
		monCalendar->SetDate(nowDate);
		cmbCategory->Text = category;
		txtItem->Text = item;
		mtxtMoney->Text = money.ToString();
		txtRemarks->Text = remarks;
	}
	private: ItemForm()
	{
		// �����Ȃ��̃R���X�g���N�^�͎g�p���Ȃ�
	}
	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~ItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::MonthCalendar^  monCalendar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::ComboBox^  cmbCategory;
	public: System::Windows::Forms::TextBox^  txtItem;
	public: System::Windows::Forms::MaskedTextBox^  mtxtMoney;
	public: System::Windows::Forms::TextBox^  txtRemarks;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;

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
			this->monCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbCategory = (gcnew System::Windows::Forms::ComboBox());
			this->txtItem = (gcnew System::Windows::Forms::TextBox());
			this->mtxtMoney = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtRemarks = (gcnew System::Windows::Forms::TextBox());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// monCalendar
			// 
			this->monCalendar->Location = System::Drawing::Point(18, 18);
			this->monCalendar->Name = L"monCalendar";
			this->monCalendar->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(229, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(229, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�i��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(229, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 3;
			this->label3->Text = L"���z";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(229, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 4;
			this->label4->Text = L"���l";
			// 
			// cmbCategory
			// 
			this->cmbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCategory->FormattingEnabled = true;
			this->cmbCategory->Location = System::Drawing::Point(265, 18);
			this->cmbCategory->Name = L"cmbCategory";
			this->cmbCategory->Size = System::Drawing::Size(121, 20);
			this->cmbCategory->TabIndex = 5;
			// 
			// txtItem
			// 
			this->txtItem->Location = System::Drawing::Point(265, 66);
			this->txtItem->Name = L"txtItem";
			this->txtItem->Size = System::Drawing::Size(100, 19);
			this->txtItem->TabIndex = 6;
			// 
			// mtxtMoney
			// 
			this->mtxtMoney->Location = System::Drawing::Point(265, 113);
			this->mtxtMoney->Mask = L"999999";
			this->mtxtMoney->Name = L"mtxtMoney";
			this->mtxtMoney->Size = System::Drawing::Size(100, 19);
			this->mtxtMoney->TabIndex = 7;
			this->mtxtMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtRemarks
			// 
			this->txtRemarks->Location = System::Drawing::Point(265, 160);
			this->txtRemarks->Name = L"txtRemarks";
			this->txtRemarks->Size = System::Drawing::Size(100, 19);
			this->txtRemarks->TabIndex = 8;
			// 
			// buttonOK
			// 
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOK->Location = System::Drawing::Point(82, 192);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 9;
			this->buttonOK->Text = L"�o�^";
			this->buttonOK->UseVisualStyleBackColor = true;
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(265, 192);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 10;
			this->buttonCancel->Text = L"�L�����Z��";
			this->buttonCancel->UseVisualStyleBackColor = true;
			// 
			// ItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 231);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->txtRemarks);
			this->Controls->Add(this->mtxtMoney);
			this->Controls->Add(this->txtItem);
			this->Controls->Add(this->cmbCategory);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monCalendar);
			this->Name = L"ItemForm";
			this->Text = L"�o�^";
			this->Load += gcnew System::EventHandler(this, &ItemForm::ItemForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ItemForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
