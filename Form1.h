#pragma once

namespace Fusen {

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
	private: System::Windows::Forms::TextBox^  textFusenMemo;
	private: System::Windows::Forms::ColorDialog^  colorDialogFusen;

	protected:


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
		private: int mouseX; // マウスの横位置（X座標）
		private: int mouseY; // マウスの縦位置（Y座標）

		private: System::Void textFusenMemo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			// 押されたキーがエスケープキー？
			if (e->KeyCode == Keys::Escape)
			{
				// Yesの場合
				// アプリケーションを終了
				this->Close();
			}
		}

		private: System::Void textFusenMemo_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// 押されたボタンがマウスの左ボタン？
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				// Yesの場合
				this->mouseX = e->X; // マウスの横位置（X座標）を記憶
				this->mouseY = e->Y; // マウスの縦位置（Y座標）を記憶
			}
		}

		private: System::Void textFusenMemo_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// 色の設定ダイアログを表示する
			colorDialogFusen->Color = textFusenMemo->BackColor;
			colorDialogFusen->ShowDialog();
			// テキストボックスの背景色を色の設定ダイアログで選んだ色に設定する
			textFusenMemo->BackColor = colorDialogFusen->Color;
		}

		private: System::Void textFusenMemo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			// 押されたボタンがマウスの左ボタン？
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				// Yesの場合
				this->Left += e->X - mouseX; // フォームの横位置を更新
				this->Top += e->Y - mouseY; // フォームの縦位置を更新
			}
		}
	private: System::Void textFusenMemo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
