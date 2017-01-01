#pragma once
namespace XConnect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
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
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: VIBlend::WinForms::Controls::vButton^  RunBtn;
	private: System::Windows::Forms::Label^  Text;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome::typeid));
			this->RunBtn = (gcnew VIBlend::WinForms::Controls::vButton());
			this->Text = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// RunBtn
			// 
			this->RunBtn->AllowAnimations = true;
			this->RunBtn->BackColor = System::Drawing::Color::Transparent;
			this->RunBtn->Location = System::Drawing::Point(12, 330);
			this->RunBtn->Name = L"RunBtn";
			this->RunBtn->RoundedCornersMask = static_cast<System::Byte>(15);
			this->RunBtn->Size = System::Drawing::Size(522, 30);
			this->RunBtn->TabIndex = 0;
			this->RunBtn->Text = L"I accept the terms and conditions and wil follow them";
			this->RunBtn->UseVisualStyleBackColor = false;
			this->RunBtn->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::VISTABLUE;
			this->RunBtn->Click += gcnew System::EventHandler(this, &Welcome::RunBtn_Click);
			// 
			// Text
			// 
			this->Text->AutoSize = true;
			this->Text->BackColor = System::Drawing::Color::Gainsboro;
			this->Text->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Text->Location = System::Drawing::Point(12, 13);
			this->Text->Name = L"Text";
			this->Text->Size = System::Drawing::Size(0, 19);
			this->Text->TabIndex = 1;
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(546, 372);
			this->Controls->Add(this->Text);
			this->Controls->Add(this->RunBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Welcome";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RunBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Application will launch now,CONDITIONS ACCEPTED","You will be using XConnect in miniutes");
				 this->Close();
			 }
	};
}
