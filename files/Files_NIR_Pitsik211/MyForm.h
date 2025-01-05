#pragma once

namespace FilesNIRPitsik211 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization; //��� DateTime

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

	protected:
	private: System::Windows::Forms::Button^ btn_open;
	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;


	private: System::Windows::Forms::DataGridView^ dgv_input;











	private: System::Windows::Forms::Button^ btn_choose;
	private: System::Windows::Forms::Button^ btn_savechoose;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_remove;
	private: System::Windows::Forms::ErrorProvider^ error_prov;









	private: System::Windows::Forms::DataGridView^ dgv_output;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_otchet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_math;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_prog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_oop;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_fiz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_disk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;










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
			this->components = (gcnew System::ComponentModel::Container());
			this->btn_open = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dgv_input = (gcnew System::Windows::Forms::DataGridView());
			this->col_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_otchet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_math = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_prog = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_oop = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_fiz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_disk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_choose = (gcnew System::Windows::Forms::Button());
			this->btn_savechoose = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_remove = (gcnew System::Windows::Forms::Button());
			this->error_prov = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->dgv_output = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_input))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_prov))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_output))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_open
			// 
			this->btn_open->Location = System::Drawing::Point(2, 123);
			this->btn_open->Margin = System::Windows::Forms::Padding(2);
			this->btn_open->Name = L"btn_open";
			this->btn_open->Size = System::Drawing::Size(127, 46);
			this->btn_open->TabIndex = 1;
			this->btn_open->Text = L"Открыть";
			this->btn_open->UseVisualStyleBackColor = true;
			this->btn_open->Click += gcnew System::EventHandler(this, &MyForm::btn_open_Click);
			// 
			// btn_save
			// 
			this->btn_save->Location = System::Drawing::Point(2, 174);
			this->btn_save->Margin = System::Windows::Forms::Padding(2);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(127, 46);
			this->btn_save->TabIndex = 2;
			this->btn_save->Text = L"Сохранить";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &MyForm::btn_save_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"*";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt) | *.txt | Все файлы (*.*) | *.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"*";
			this->saveFileDialog->Filter = L"Текстовые файлы (*.txt) | *.txt | Все файлы (*.*) | *.*";
			this->saveFileDialog->Title = L"Сохранить файл";
			// 
			// dgv_input
			// 
			this->dgv_input->AllowUserToAddRows = false;
			this->dgv_input->AllowUserToDeleteRows = false;
			this->dgv_input->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_input->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->col_surname,
					this->col_name, this->col_otchet, this->col_date, this->col_math, this->col_prog, this->col_oop, this->col_fiz, this->col_disk
			});
			this->dgv_input->Location = System::Drawing::Point(146, 10);
			this->dgv_input->Margin = System::Windows::Forms::Padding(2);
			this->dgv_input->Name = L"dgv_input";
			this->dgv_input->RowHeadersWidth = 51;
			this->dgv_input->RowTemplate->Height = 24;
			this->dgv_input->Size = System::Drawing::Size(766, 210);
			this->dgv_input->TabIndex = 4;
			// 
			// col_surname
			// 
			this->col_surname->HeaderText = L"Фамилия";
			this->col_surname->MinimumWidth = 6;
			this->col_surname->Name = L"col_surname";
			this->col_surname->Width = 125;
			// 
			// col_name
			// 
			this->col_name->HeaderText = L"Имя";
			this->col_name->MinimumWidth = 6;
			this->col_name->Name = L"col_name";
			this->col_name->Width = 125;
			// 
			// col_otchet
			// 
			this->col_otchet->HeaderText = L"Отчество";
			this->col_otchet->MinimumWidth = 6;
			this->col_otchet->Name = L"col_otchet";
			this->col_otchet->Width = 125;
			// 
			// col_date
			// 
			this->col_date->HeaderText = L"Дата рождения";
			this->col_date->MinimumWidth = 6;
			this->col_date->Name = L"col_date";
			this->col_date->Width = 125;
			// 
			// col_math
			// 
			this->col_math->HeaderText = L"Мат анализ";
			this->col_math->MinimumWidth = 6;
			this->col_math->Name = L"col_math";
			this->col_math->Width = 125;
			// 
			// col_prog
			// 
			this->col_prog->HeaderText = L"НИР";
			this->col_prog->MinimumWidth = 6;
			this->col_prog->Name = L"col_prog";
			this->col_prog->Width = 125;
			// 
			// col_oop
			// 
			this->col_oop->HeaderText = L"Структуры данных";
			this->col_oop->MinimumWidth = 6;
			this->col_oop->Name = L"col_oop";
			this->col_oop->Width = 125;
			// 
			// col_fiz
			// 
			this->col_fiz->HeaderText = L"Физика";
			this->col_fiz->MinimumWidth = 6;
			this->col_fiz->Name = L"col_fiz";
			this->col_fiz->Width = 125;
			// 
			// col_disk
			// 
			this->col_disk->HeaderText = L"Программирование";
			this->col_disk->MinimumWidth = 6;
			this->col_disk->Name = L"col_disk";
			this->col_disk->Width = 125;
			// 
			// btn_choose
			// 
			this->btn_choose->Location = System::Drawing::Point(2, 336);
			this->btn_choose->Margin = System::Windows::Forms::Padding(2);
			this->btn_choose->Name = L"btn_choose";
			this->btn_choose->Size = System::Drawing::Size(127, 46);
			this->btn_choose->TabIndex = 6;
			this->btn_choose->Text = L"Выбрать сдавших";
			this->btn_choose->UseVisualStyleBackColor = true;
			this->btn_choose->Click += gcnew System::EventHandler(this, &MyForm::btn_choose_Click);
			// 
			// btn_savechoose
			// 
			this->btn_savechoose->Location = System::Drawing::Point(2, 388);
			this->btn_savechoose->Margin = System::Windows::Forms::Padding(2);
			this->btn_savechoose->Name = L"btn_savechoose";
			this->btn_savechoose->Size = System::Drawing::Size(127, 46);
			this->btn_savechoose->TabIndex = 7;
			this->btn_savechoose->Text = L"Сохранить сдавших";
			this->btn_savechoose->UseVisualStyleBackColor = true;
			this->btn_savechoose->Click += gcnew System::EventHandler(this, &MyForm::btn_savechoose_Click);
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(916, 10);
			this->btn_add->Margin = System::Windows::Forms::Padding(2);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(30, 46);
			this->btn_add->TabIndex = 8;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_remove
			// 
			this->btn_remove->Location = System::Drawing::Point(916, 174);
			this->btn_remove->Margin = System::Windows::Forms::Padding(2);
			this->btn_remove->Name = L"btn_remove";
			this->btn_remove->Size = System::Drawing::Size(30, 46);
			this->btn_remove->TabIndex = 9;
			this->btn_remove->Text = L"-";
			this->btn_remove->UseVisualStyleBackColor = true;
			this->btn_remove->Click += gcnew System::EventHandler(this, &MyForm::btn_remove_Click);
			// 
			// error_prov
			// 
			this->error_prov->ContainerControl = this;
			// 
			// dgv_output
			// 
			this->dgv_output->AllowUserToAddRows = false;
			this->dgv_output->AllowUserToDeleteRows = false;
			this->dgv_output->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_output->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dgv_output->Location = System::Drawing::Point(146, 225);
			this->dgv_output->Margin = System::Windows::Forms::Padding(2);
			this->dgv_output->Name = L"dgv_output";
			this->dgv_output->RowHeadersWidth = 51;
			this->dgv_output->RowTemplate->Height = 24;
			this->dgv_output->Size = System::Drawing::Size(766, 210);
			this->dgv_output->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Фамилия";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Имя";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Отчество";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Дата рождения";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Мат анализ";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"НИР";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Структуры данных";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Физика";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Программирование";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 444);
			this->Controls->Add(this->dgv_output);
			this->Controls->Add(this->btn_remove);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_savechoose);
			this->Controls->Add(this->btn_choose);
			this->Controls->Add(this->dgv_input);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_open);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Файловые диалоги Пицик 211гр";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_input))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_prov))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_output))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Открыть файл
	private: System::Void btn_open_Click(System::Object^ sender, System::EventArgs^ e) {
		error_prov->Clear();

		System::IO::Stream^ myStream;
		if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			if ((myStream = openFileDialog->OpenFile()) != nullptr)
			{
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(
					myStream, System::Text::Encoding::GetEncoding(1251)
				);
				int row = 0;
				System::String^ str1 = "";
				while (sr->Peek() > -1)
				{
					str1 = sr->ReadLine();
					array<String^>^ words = str1->Split(' ');
					dgv_input->Rows->Add(words);
				}

				sr->Close();
			}
	}
		   //Сохранить исходное
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
		error_prov->Clear();
		bool date_flag = true;
		for (int i = 0; i < dgv_input->RowCount; ++i)
		{
			String^ format = "dd.MM.yyyy";
			DateTime date;
			String^ date_to_parse = System::Convert::ToString(dgv_input->Rows[i]->Cells[3]->Value);
			date_flag = DateTime::TryParseExact(date_to_parse, format, System::Globalization::CultureInfo::InvariantCulture,
				DateTimeStyles::None, date);

			if (!date_flag)
				break;
		}
		if (!date_flag)
			error_prov->SetError(dgv_input, "Некорректный формат даты");
		else
		{
			bool flag = true;
			for (int i = 0; i < dgv_input->RowCount; ++i)
			{
				for (int j = 4; j < 9; ++j)
				{
					String^ s = System::Convert::ToString(dgv_input->Rows[i]->Cells[j]->Value);
					int num;
					bool parse = Int32::TryParse(s, num);

					if (parse)
						if (num > 5 || num < 0)
							flag = false;
				}
				if (!flag)
					break;
			}

			if (!flag)
				error_prov->SetError(dgv_input, "Некорректный формат оценки");
			else
			{
				System::IO::Stream^ myStream;
				if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					if ((myStream = saveFileDialog->OpenFile()) != nullptr)
					{
						System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
						for (int i = 0; i < dgv_input->RowCount; ++i)
						{
							String^ s;
							for (int j = 0; j < dgv_input->ColumnCount; ++j)
								s += System::Convert::ToString(dgv_input->Rows[i]->Cells[j]->Value) + " ";

							sw->WriteLine(s);
						}

						sw->Close();
					}
				}
			}
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   //Добавить строчку
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	error_prov->Clear();
	this->dgv_input->Rows->Add();
}
	   //Удалить строчку
private: System::Void btn_remove_Click(System::Object^ sender, System::EventArgs^ e) {
	error_prov->Clear();

	int cur_row = dgv_input->CurrentRow->Index;
	if (cur_row < dgv_input->RowCount)
		dgv_input->Rows->RemoveAt(cur_row);
}

	   //выбрать сдавших
private: System::Void btn_choose_Click(System::Object^ sender, System::EventArgs^ e) {
	error_prov->Clear();
	dgv_output->Rows->Clear();
	bool date_flag = true;
	for (int i = 0; i < dgv_input->RowCount; ++i)
	{
		String^ format = "dd.MM.yyyy";
		DateTime date;
		String^ date_to_parse = System::Convert::ToString(dgv_input->Rows[i]->Cells[3]->Value);
		date_flag = DateTime::TryParseExact(date_to_parse, format, System::Globalization::CultureInfo::InvariantCulture,
			DateTimeStyles::None, date);

		if (!date_flag)
			break;
	}
	if (!date_flag)
		error_prov->SetError(dgv_input, "Некорректный формат даты");
	else
	{
		bool flag = true;
		for (int i = 0; i < dgv_input->RowCount; ++i)
		{
			for (int j = 4; j < 9; ++j)
			{
				String^ s = System::Convert::ToString(dgv_input->Rows[i]->Cells[j]->Value);
				int num;
				bool parse = Int32::TryParse(s, num);

				if (parse)
				{
					if (num > 5 || num < 0)
						flag = false;
				}
				else if (!parse)
					if (s != "неявка" && s != "незачтено" && s != "зачтено")
						flag = false;

			}
			if (!flag)
				break;
		}

		if (!flag)
			error_prov->SetError(dgv_input, "Некорректный формат оценок");
		else
		{
			int row_fill = 0;
			for (int i = 0; i < dgv_input->RowCount; ++i)
			{
				bool session_flag = true;
				for (int j = 4; j < 9; ++j)
				{
					String^ s = System::Convert::ToString(dgv_input->Rows[i]->Cells[j]->Value);
					if (s == "незачтено" || s == "неявка" || s == "2" || s == "1" || s == "0")
						session_flag = false;
				}
				if (session_flag)
				{
					dgv_output->Rows->Add();
					for (int l = 0; l < dgv_output->ColumnCount; ++l)
						dgv_output->Rows[row_fill]->Cells[l]->Value = dgv_input->Rows[i]->Cells[l]->Value;
					row_fill++;
				}
			}
		}
	}
}
	   //Сохранить выбранных
private: System::Void btn_savechoose_Click(System::Object^ sender, System::EventArgs^ e) {
	error_prov->Clear();

	bool date_flag = true;
	for (int i = 0; i < dgv_output->RowCount; ++i)
	{
		String^ format = "dd.MM.yyyy";
		DateTime date;
		String^ date_to_parse = System::Convert::ToString(dgv_output->Rows[i]->Cells[3]->Value);
		date_flag = DateTime::TryParseExact(date_to_parse, format, System::Globalization::CultureInfo::InvariantCulture,
			DateTimeStyles::None, date);

		if (!date_flag)
			break;
	}
	if (!date_flag)
		error_prov->SetError(dgv_output, "Некорректный формат даты");
	else
	{
		bool flag = true;
		for (int i = 0; i < dgv_output->RowCount; ++i)
		{
			for (int j = 4; j < 9; ++j)
			{
				String^ s = System::Convert::ToString(dgv_output->Rows[i]->Cells[j]->Value);
				int num;
				bool parse = Int32::TryParse(s, num);

				if (parse)
					if (num > 5 || num < 0)
						flag = false;
			}
			if (!flag)
				break;
		}

		if (!flag)
			error_prov->SetError(dgv_output, "Некорректный формат оценок");
		else
		{
			System::IO::Stream^ myStream;
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = saveFileDialog->OpenFile()) != nullptr)
				{
					System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
					for (int i = 0; i < dgv_output->RowCount; ++i)
					{
						String^ s;
						for (int j = 0; j < dgv_output->ColumnCount; ++j)
							s += System::Convert::ToString(dgv_output->Rows[i]->Cells[j]->Value) + " ";

						sw->WriteLine(s);
					}

					sw->Close();
				}
			}
		}
	}
}
};
}
