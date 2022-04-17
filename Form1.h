#pragma once

namespace Fusen {

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
	private: System::Windows::Forms::TextBox^  textFusenMemo;
	private: System::Windows::Forms::ColorDialog^  colorDialogFusen;

	protected:


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
			this->textFusenMemo = (gcnew System::Windows::Forms::TextBox());
			this->colorDialogFusen = (gcnew System::Windows::Forms::ColorDialog());
			this->SuspendLayout();
			// 
			// textFusenMemo
			// 
			this->textFusenMemo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textFusenMemo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textFusenMemo->Location = System::Drawing::Point(0, 0);
			this->textFusenMemo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textFusenMemo->Multiline = true;
			this->textFusenMemo->Name = L"textFusenMemo";
			this->textFusenMemo->Size = System::Drawing::Size(247, 183);
			this->textFusenMemo->TabIndex = 0;
			this->textFusenMemo->TextChanged += gcnew System::EventHandler(this, &Form1::textFusenMemo_TextChanged);
			this->textFusenMemo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textFusenMemo_KeyDown);
			this->textFusenMemo->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textFusenMemo_MouseDoubleClick);
			this->textFusenMemo->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textFusenMemo_MouseDown);
			this->textFusenMemo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textFusenMemo_MouseMove);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(247, 183);
			this->Controls->Add(this->textFusenMemo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Opacity = 0.6;
			this->Text = L"Form1";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: int mouseX; // �}�E�X�̉��ʒu�iX���W�j
		private: int mouseY; // �}�E�X�̏c�ʒu�iY���W�j

		private: System::Void textFusenMemo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			// �����ꂽ�L�[���G�X�P�[�v�L�[�H
			if (e->KeyCode == Keys::Escape)
			{
				// Yes�̏ꍇ
				// �A�v���P�[�V�������I��
				this->Close();
			}
		}

		private: System::Void textFusenMemo_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// �����ꂽ�{�^�����}�E�X�̍��{�^���H
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				// Yes�̏ꍇ
				this->mouseX = e->X; // �}�E�X�̉��ʒu�iX���W�j���L��
				this->mouseY = e->Y; // �}�E�X�̏c�ʒu�iY���W�j���L��
			}
		}

		private: System::Void textFusenMemo_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// �F�̐ݒ�_�C�A���O��\������
			colorDialogFusen->Color = textFusenMemo->BackColor;
			colorDialogFusen->ShowDialog();
			// �e�L�X�g�{�b�N�X�̔w�i�F��F�̐ݒ�_�C�A���O�őI�񂾐F�ɐݒ肷��
			textFusenMemo->BackColor = colorDialogFusen->Color;
		}

		private: System::Void textFusenMemo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// �����ꂽ�{�^�����}�E�X�̍��{�^���H
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				// Yes�̏ꍇ
				this->Left += e->X - mouseX; // �t�H�[���̉��ʒu���X�V
				this->Top += e->Y - mouseY; // �t�H�[���̏c�ʒu���X�V
			}
		}
	private: System::Void textFusenMemo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
