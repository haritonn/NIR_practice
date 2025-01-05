#pragma once

namespace My7NIRPitsik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;	//���������� ��� KeyValuePair �������

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_table;
	protected:


	private: System::Windows::Forms::Button^ btn_dict;
	private: System::Windows::Forms::Button^ btn_find;
	private: System::Windows::Forms::Label^ label_surname;

	private: System::Windows::Forms::Label^ label_work;




	private: System::Windows::Forms::TextBox^ text_surname;
	private: System::Windows::Forms::TextBox^ text_work;
	private: System::Windows::Forms::TextBox^ text_list;
	private: System::Windows::Forms::TextBox^ text_work1;
	private: System::Windows::Forms::Button^ btn_list;
	private: System::Windows::Forms::Label^ label_work1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_work;


	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_table = (gcnew System::Windows::Forms::DataGridView());
			this->col_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_work = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_dict = (gcnew System::Windows::Forms::Button());
			this->btn_find = (gcnew System::Windows::Forms::Button());
			this->label_surname = (gcnew System::Windows::Forms::Label());
			this->label_work = (gcnew System::Windows::Forms::Label());
			this->text_surname = (gcnew System::Windows::Forms::TextBox());
			this->text_work = (gcnew System::Windows::Forms::TextBox());
			this->text_list = (gcnew System::Windows::Forms::TextBox());
			this->text_work1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_list = (gcnew System::Windows::Forms::Button());
			this->label_work1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_table))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_table
			// 
			this->dgv_table->AllowUserToAddRows = false;
			this->dgv_table->AllowUserToDeleteRows = false;
			this->dgv_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->col_surname,
					this->col_work
			});
			this->dgv_table->Location = System::Drawing::Point(0, 0);
			this->dgv_table->Margin = System::Windows::Forms::Padding(2);
			this->dgv_table->Name = L"dgv_table";
			this->dgv_table->ReadOnly = true;
			this->dgv_table->RowHeadersWidth = 51;
			this->dgv_table->RowTemplate->Height = 24;
			this->dgv_table->Size = System::Drawing::Size(316, 331);
			this->dgv_table->TabIndex = 0;
			// 
			// col_surname
			// 
			this->col_surname->HeaderText = L"Фамилия";
			this->col_surname->MinimumWidth = 6;
			this->col_surname->Name = L"col_surname";
			this->col_surname->ReadOnly = true;
			this->col_surname->Width = 125;
			// 
			// col_work
			// 
			this->col_work->HeaderText = L"Должность";
			this->col_work->MinimumWidth = 6;
			this->col_work->Name = L"col_work";
			this->col_work->ReadOnly = true;
			this->col_work->Width = 125;
			// 
			// btn_dict
			// 
			this->btn_dict->Location = System::Drawing::Point(321, 297);
			this->btn_dict->Margin = System::Windows::Forms::Padding(2);
			this->btn_dict->Name = L"btn_dict";
			this->btn_dict->Size = System::Drawing::Size(106, 34);
			this->btn_dict->TabIndex = 1;
			this->btn_dict->Text = L"Создать словарь";
			this->btn_dict->UseVisualStyleBackColor = true;
			this->btn_dict->Click += gcnew System::EventHandler(this, &MyForm::btn_dict_Click);
			// 
			// btn_find
			// 
			this->btn_find->Location = System::Drawing::Point(436, 244);
			this->btn_find->Margin = System::Windows::Forms::Padding(2);
			this->btn_find->Name = L"btn_find";
			this->btn_find->Size = System::Drawing::Size(125, 34);
			this->btn_find->TabIndex = 2;
			this->btn_find->Text = L"Найти должность";
			this->btn_find->UseVisualStyleBackColor = true;
			this->btn_find->Click += gcnew System::EventHandler(this, &MyForm::btn_find_Click);
			this->btn_find->Enabled = false;
			// 
			// label_surname
			// 
			this->label_surname->AutoSize = true;
			this->label_surname->Location = System::Drawing::Point(341, 202);
			this->label_surname->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_surname->Name = L"label_surname";
			this->label_surname->Size = System::Drawing::Size(56, 13);
			this->label_surname->TabIndex = 3;
			this->label_surname->Text = L"Фамилия";
			// 
			// label_work
			// 
			this->label_work->AutoSize = true;
			this->label_work->Location = System::Drawing::Point(341, 225);
			this->label_work->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_work->Name = L"label_work";
			this->label_work->Size = System::Drawing::Size(65, 13);
			this->label_work->TabIndex = 4;
			this->label_work->Text = L"Должность";
			this->label_work->Click += gcnew System::EventHandler(this, &MyForm::label_work_Click);
			// 
			// text_surname
			// 
			this->text_surname->Location = System::Drawing::Point(406, 198);
			this->text_surname->Margin = System::Windows::Forms::Padding(2);
			this->text_surname->Name = L"text_surname";
			this->text_surname->Size = System::Drawing::Size(156, 20);
			this->text_surname->TabIndex = 5;
			// 
			// text_work
			// 
			this->text_work->Location = System::Drawing::Point(406, 221);
			this->text_work->Margin = System::Windows::Forms::Padding(2);
			this->text_work->Name = L"text_work";
			this->text_work->ReadOnly = true;
			this->text_work->Size = System::Drawing::Size(156, 20);
			this->text_work->TabIndex = 6;
			// 
			// text_list
			// 
			this->text_list->Location = System::Drawing::Point(344, 10);
			this->text_list->Margin = System::Windows::Forms::Padding(2);
			this->text_list->Multiline = true;
			this->text_list->Name = L"text_list";
			this->text_list->ReadOnly = true;
			this->text_list->Size = System::Drawing::Size(137, 165);
			this->text_list->TabIndex = 7;
			// 
			// text_work1
			// 
			this->text_work1->Location = System::Drawing::Point(484, 117);
			this->text_work1->Margin = System::Windows::Forms::Padding(2);
			this->text_work1->Name = L"text_work1";
			this->text_work1->Size = System::Drawing::Size(116, 20);
			this->text_work1->TabIndex = 8;
			// 
			// btn_list
			// 
			this->btn_list->Location = System::Drawing::Point(484, 140);
			this->btn_list->Margin = System::Windows::Forms::Padding(2);
			this->btn_list->Name = L"btn_list";
			this->btn_list->Size = System::Drawing::Size(116, 34);
			this->btn_list->TabIndex = 9;
			this->btn_list->Text = L"Вывести фамилии";
			this->btn_list->UseVisualStyleBackColor = true;
			this->btn_list->Click += gcnew System::EventHandler(this, &MyForm::btn_list_Click);
			this->btn_list->Enabled = false;
			// 
			// label_work1
			// 
			this->label_work1->AutoSize = true;
			this->label_work1->Location = System::Drawing::Point(484, 101);
			this->label_work1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_work1->Name = L"label_work1";
			this->label_work1->Size = System::Drawing::Size(65, 13);
			this->label_work1->TabIndex = 10;
			this->label_work1->Text = L"Должность";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 332);
			this->Controls->Add(this->label_work1);
			this->Controls->Add(this->btn_list);
			this->Controls->Add(this->text_work1);
			this->Controls->Add(this->text_list);
			this->Controls->Add(this->text_work);
			this->Controls->Add(this->text_surname);
			this->Controls->Add(this->label_work);
			this->Controls->Add(this->label_surname);
			this->Controls->Add(this->btn_find);
			this->Controls->Add(this->btn_dict);
			this->Controls->Add(this->dgv_table);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа 7 Пицик 211";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Заполняем DataGridView элементами
	private: System::Void btn_dict_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btn_dict->Enabled = false;
		this->btn_find->Enabled = true;
		this->btn_list->Enabled = true;

		System::Collections::Generic::SortedDictionary <String^, String^> dict;
		
		//Элементы словаря
		dict.Add("Пицик", "Старший разработчик");
		dict.Add("Коновалов", "DevOps инженер");
		dict.Add("Дрождев", "Разработчик");
		dict.Add("Цой", "ML-инженер");
		dict.Add("Артамонова", "Средний разработчик");
		dict.Add("Карасёв", "DevOps инженер");
		dict.Add("Воронцов", "Prompt инженер");
		dict.Add("Гришин", "Full-stack разработчик");
		dict.Add("Николаев", "GameDev разработчик");
		dict.Add("Иванов", "Младший разработчик");

		for each (KeyValuePair<String^, String^> item in dict)
		{
			int row = dgv_table->Rows->Add();
			dgv_table->Rows[row]->Cells[0]->Value = item.Key;
			dgv_table->Rows[row]->Cells[1]->Value = item.Value;
		}
	}
		   //поиск по фамилии
private: System::Void btn_find_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ surname = this->text_surname->Text;
	System::Collections::Generic::SortedDictionary <String^, String^> dict;

	for (int i = 0; i < dgv_table->RowCount; ++i)
		dict.Add(System::Convert::ToString(dgv_table->Rows[i]->Cells[0]->Value),
			System::Convert::ToString(dgv_table->Rows[i]->Cells[1]->Value));

	bool find_flag = false;
	for each (KeyValuePair<String^, String^> item in dict)
		if (item.Key == surname)
		{
			find_flag = true;
			this->text_work->Text = item.Value;
			break;
		}
	if (!find_flag)
		this->text_work->Text = "Не найдено";

}
	   //Поиск людей, занимающих данную должность
private: System::Void btn_list_Click(System::Object^ sender, System::EventArgs^ e) {
	this->text_list->Clear();
	String^ work = this->text_work1->Text;
	System::Collections::Generic::SortedDictionary <String^, String^> dict;

	for (int i = 0; i < dgv_table->RowCount; ++i)
		dict.Add(System::Convert::ToString(dgv_table->Rows[i]->Cells[0]->Value),
			System::Convert::ToString(dgv_table->Rows[i]->Cells[1]->Value));

	for each (KeyValuePair<String^, String^> item in dict)
		if (item.Value == work)
			this->text_list->Text += item.Key + "\r\n";
}
private: System::Void label_work_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
