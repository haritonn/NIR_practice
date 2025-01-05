#pragma once

namespace Factorial {

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
	private: System::Windows::Forms::Label^ label_input;
	protected:
	private: System::Windows::Forms::Label^ label_output;
	private: System::Windows::Forms::TextBox^ text_input;
	private: System::Windows::Forms::TextBox^ text_output;
	private: System::Windows::Forms::Button^ btn_compute;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;

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
			this->label_input = (gcnew System::Windows::Forms::Label());
			this->label_output = (gcnew System::Windows::Forms::Label());
			this->text_input = (gcnew System::Windows::Forms::TextBox());
			this->text_output = (gcnew System::Windows::Forms::TextBox());
			this->btn_compute = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_input
			// 
			this->label_input->AutoSize = true;
			this->label_input->Location = System::Drawing::Point(46, 82);
			this->label_input->Name = L"label_input";
			this->label_input->Size = System::Drawing::Size(27, 13);
			this->label_input->TabIndex = 0;
			this->label_input->Text = L"N = ";
			// 
			// label_output
			// 
			this->label_output->AutoSize = true;
			this->label_output->Location = System::Drawing::Point(46, 109);
			this->label_output->Name = L"label_output";
			this->label_output->Size = System::Drawing::Size(30, 13);
			this->label_output->TabIndex = 1;
			this->label_output->Text = L"N! = ";
			// 
			// text_input
			// 
			this->text_input->Location = System::Drawing::Point(82, 79);
			this->text_input->Name = L"text_input";
			this->text_input->Size = System::Drawing::Size(100, 20);
			this->text_input->TabIndex = 2;
			// 
			// text_output
			// 
			this->text_output->Location = System::Drawing::Point(82, 105);
			this->text_output->Name = L"text_output";
			this->text_output->ReadOnly = true;
			this->text_output->Size = System::Drawing::Size(100, 20);
			this->text_output->TabIndex = 3;
			// 
			// btn_compute
			// 
			this->btn_compute->Location = System::Drawing::Point(82, 160);
			this->btn_compute->Name = L"btn_compute";
			this->btn_compute->Size = System::Drawing::Size(75, 23);
			this->btn_compute->TabIndex = 4;
			this->btn_compute->Text = L"Вычислить";
			this->btn_compute->UseVisualStyleBackColor = true;
			this->btn_compute->Click += gcnew System::EventHandler(this, &MyForm::btn_compute_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btn_compute);
			this->Controls->Add(this->text_output);
			this->Controls->Add(this->text_input);
			this->Controls->Add(this->label_output);
			this->Controls->Add(this->label_input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Факториал";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_compute_Click(System::Object^ sender, System::EventArgs^ e) {
		this->text_output->Text = "";
		long long input;
		bool result = Int64::TryParse(this->text_input->Text, input);
		//Если удалось считать число, то вычисляем
		//факториал.
		if (result)
		{
			long long output = fact(input);
			this->text_output->Text = System::Convert::ToString(output);
		}
		//В противном случае, с помощью ErrorProvider возвращаем ошибку.
		else
			errorProvider1->SetError(text_input, "Некорректные данные");
	}
};
}
