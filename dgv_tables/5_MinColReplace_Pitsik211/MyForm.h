#pragma once

namespace My5MinColReplacePitsik211 {

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
	private: System::Windows::Forms::DataGridView^ data_first;
	private: System::Windows::Forms::DataGridView^ data_x;
	private: System::Windows::Forms::DataGridView^ data_result;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_x;




	private: System::Windows::Forms::Button^ btn_calc;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_rm;
	private: System::Windows::Forms::ErrorProvider^ error_prov;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_res_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_res_5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_res_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_res_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_res_4;
	private: System::ComponentModel::IContainer^ components;
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
			this->data_first = (gcnew System::Windows::Forms::DataGridView());
			this->data_x = (gcnew System::Windows::Forms::DataGridView());
			this->col_x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data_result = (gcnew System::Windows::Forms::DataGridView());
			this->btn_calc = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_rm = (gcnew System::Windows::Forms::Button());
			this->error_prov = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->col_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_res_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_res_5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_res_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_res_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_res_4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_first))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_prov))->BeginInit();
			this->SuspendLayout();
			// 
			// data_first
			// 
			this->data_first->AllowUserToAddRows = false;
			this->data_first->AllowUserToDeleteRows = false;
			this->data_first->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_first->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->col_1, this->col_2,
					this->col_5, this->col_3, this->col_4
			});
			this->data_first->Location = System::Drawing::Point(12, 12);
			this->data_first->Name = L"data_first";
			this->data_first->Size = System::Drawing::Size(243, 174);
			this->data_first->TabIndex = 0;
			this->data_first->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// data_x
			// 
			this->data_x->AllowUserToAddRows = false;
			this->data_x->AllowUserToDeleteRows = false;
			this->data_x->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_x->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->col_x });
			this->data_x->Location = System::Drawing::Point(268, 12);
			this->data_x->Name = L"data_x";
			this->data_x->Size = System::Drawing::Size(93, 174);
			this->data_x->TabIndex = 1;
			// 
			// col_x
			// 
			this->col_x->HeaderText = L"X";
			this->col_x->Name = L"col_x";
			this->col_x->Width = 50;
			// 
			// data_result
			// 
			this->data_result->AllowUserToAddRows = false;
			this->data_result->AllowUserToDeleteRows = false;
			this->data_result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_result->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->col_res_1,
					this->col_res_5, this->col_res_2, this->col_res_3, this->col_res_4
			});
			this->data_result->Location = System::Drawing::Point(376, 12);
			this->data_result->Name = L"data_result";
			this->data_result->Size = System::Drawing::Size(243, 174);
			this->data_result->TabIndex = 2;
			// 
			// btn_calc
			// 
			this->btn_calc->Location = System::Drawing::Point(277, 283);
			this->btn_calc->Name = L"btn_calc";
			this->btn_calc->Size = System::Drawing::Size(75, 23);
			this->btn_calc->TabIndex = 3;
			this->btn_calc->Text = L"Вычислить";
			this->btn_calc->UseVisualStyleBackColor = true;
			this->btn_calc->Click += gcnew System::EventHandler(this, &MyForm::btn_calc_Click);
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(219, 192);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(75, 23);
			this->btn_add->TabIndex = 4;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_rm
			// 
			this->btn_rm->Location = System::Drawing::Point(325, 192);
			this->btn_rm->Name = L"btn_rm";
			this->btn_rm->Size = System::Drawing::Size(75, 23);
			this->btn_rm->TabIndex = 5;
			this->btn_rm->Text = L"Удалить";
			this->btn_rm->UseVisualStyleBackColor = true;
			this->btn_rm->Click += gcnew System::EventHandler(this, &MyForm::btn_rm_Click);
			// 
			// error_prov
			// 
			this->error_prov->ContainerControl = this;
			// 
			// col_1
			// 
			this->col_1->HeaderText = L"";
			this->col_1->Name = L"col_1";
			this->col_1->Width = 40;
			// 
			// col_2
			// 
			this->col_2->HeaderText = L"";
			this->col_2->Name = L"col_2";
			this->col_2->Width = 40;
			// 
			// col_5
			// 
			this->col_5->HeaderText = L"";
			this->col_5->Name = L"col_5";
			this->col_5->Width = 40;
			// 
			// col_3
			// 
			this->col_3->HeaderText = L"";
			this->col_3->Name = L"col_3";
			this->col_3->Width = 40;
			// 
			// col_4
			// 
			this->col_4->HeaderText = L"";
			this->col_4->Name = L"col_4";
			this->col_4->Width = 40;
			// 
			// col_res_1
			// 
			this->col_res_1->HeaderText = L"";
			this->col_res_1->Name = L"col_res_1";
			this->col_res_1->Width = 40;
			// 
			// col_res_5
			// 
			this->col_res_5->HeaderText = L"";
			this->col_res_5->Name = L"col_res_5";
			this->col_res_5->Width = 40;
			// 
			// col_res_2
			// 
			this->col_res_2->HeaderText = L"";
			this->col_res_2->Name = L"col_res_2";
			this->col_res_2->Width = 40;
			// 
			// col_res_3
			// 
			this->col_res_3->HeaderText = L"";
			this->col_res_3->Name = L"col_res_3";
			this->col_res_3->Width = 40;
			// 
			// col_res_4
			// 
			this->col_res_4->HeaderText = L"";
			this->col_res_4->Name = L"col_res_4";
			this->col_res_4->Width = 40;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 318);
			this->Controls->Add(this->btn_rm);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_calc);
			this->Controls->Add(this->data_result);
			this->Controls->Add(this->data_x);
			this->Controls->Add(this->data_first);
			this->Name = L"MyForm";
			this->Text = L"Пицик Лабораторная Работа N5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_first))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_prov))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		data_first->Rows->Add();
		data_x->Rows->Add();
		data_result->Rows->Add();
	}
private: System::Void btn_rm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (data_first->CurrentRow != nullptr && !data_first->CurrentRow->IsNewRow)
	{
		int rowIndex = data_first->CurrentRow->Index;

		// удаляем строку из data_first
		data_first->Rows->RemoveAt(rowIndex);

		// проверяем есть ли rowIndex в data_x
		if (rowIndex < data_x->Rows->Count)
		{
			// удаляем строку из data_x по тому же индексу
			data_x->Rows->RemoveAt(rowIndex);
		}
		// проверяем есть ли rowIndex в data_result
		if (rowIndex < data_result->Rows->Count)
		{
			// удаляем строку из data_result по тому же индексу
			data_result->Rows->RemoveAt(rowIndex);
		}
	}
}
	   void ClearAll()
	   {
		   error_prov->SetError(btn_calc, "");
	   }
private: System::Void btn_calc_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearAll();
	data_result->Rows->Clear();
	if (data_x->Rows->Count != data_first->Rows->Count)
		error_prov->SetError(btn_calc, "Размерности исходной матрицы и X не совпадают!");
	else
	{
		int min_el = 1000000; //условное значение для поиска минимума
		//первый цикл - ищем минимальный элемент в принципе

		bool flag_for_data = true;
		for (int i = 0; i < data_first->Columns->Count; i++)
			for (int j = 0; j < data_first->Rows->Count; j++)
			{
				int data_el;
				bool data_fl = Int32::TryParse(System::Convert::ToString(data_first->Rows[j]->Cells[i]->Value), data_el);
				if (!data_fl)
				{
					error_prov->SetError(btn_calc, "В матрице есть не числа");
					flag_for_data = false;
				}
				if (data_el < min_el)
					min_el = data_el;
			}
		bool flag_for_x = true;
		for (int k = 0; k < data_x->Rows->Count; k++)
		{
			int x_el;
			bool x_fl = Int32::TryParse(System::Convert::ToString(data_x->Rows[k]->Cells[0]->Value), x_el);
			if (!x_fl)
			{
				error_prov->SetError(btn_calc, "В X есть не числа");
				flag_for_x = false;
			}
		}
		if (flag_for_x && flag_for_data)
		{
			data_result->RowCount = data_first->RowCount;
			data_result->ColumnCount = data_first->ColumnCount;
			bool is_swapped;
			for (int i = 0; i < data_first->Columns->Count; i++)
			{
				is_swapped = false;
				for (int j = 0; j < data_first->Rows->Count; j++)
				{
					int data_el = Int32::Parse(System::Convert::ToString(data_first->Rows[j]->Cells[i]->Value));
					if (data_el == min_el)
					{
						is_swapped = true;
						for (int k = 0; k < data_x->Rows->Count; k++)
						{
							data_result->Rows[k]->Cells[i]->Value = data_x->Rows[k]->Cells[0]->Value;
						}
						break;
					}
					if (!is_swapped)
						data_result->Rows[j]->Cells[i]->Value = data_first->Rows[j]->Cells[i]->Value;
				}
			}
		}
	}
}
};
}
