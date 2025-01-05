#pragma once
#include "test_structure.h"
namespace TESTPitsik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ text_questions;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ group_yesno;
	private: System::Windows::Forms::RadioButton^ radio_no;
	private: System::Windows::Forms::RadioButton^ radio_yes;
	private: System::Windows::Forms::GroupBox^ group_single;
	private: System::Windows::Forms::RadioButton^ radio_single4;

	private: System::Windows::Forms::RadioButton^ radio_single3;
	private: System::Windows::Forms::RadioButton^ radio_single2;
	private: System::Windows::Forms::RadioButton^ radio_single1;
	private: System::Windows::Forms::GroupBox^ group_multiple;
	private: System::Windows::Forms::CheckBox^ check_4;
	private: System::Windows::Forms::CheckBox^ check_3;
	private: System::Windows::Forms::CheckBox^ check_2;
	private: System::Windows::Forms::CheckBox^ check_1;
	private: System::Windows::Forms::GroupBox^ group_txt;
	private: System::Windows::Forms::TextBox^ text_answer;

	private: System::Windows::Forms::Button^ btn_answer;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_questions = (gcnew System::Windows::Forms::TextBox());
			this->group_yesno = (gcnew System::Windows::Forms::GroupBox());
			this->radio_no = (gcnew System::Windows::Forms::RadioButton());
			this->radio_yes = (gcnew System::Windows::Forms::RadioButton());
			this->group_single = (gcnew System::Windows::Forms::GroupBox());
			this->radio_single4 = (gcnew System::Windows::Forms::RadioButton());
			this->radio_single3 = (gcnew System::Windows::Forms::RadioButton());
			this->radio_single2 = (gcnew System::Windows::Forms::RadioButton());
			this->radio_single1 = (gcnew System::Windows::Forms::RadioButton());
			this->group_multiple = (gcnew System::Windows::Forms::GroupBox());
			this->check_4 = (gcnew System::Windows::Forms::CheckBox());
			this->check_3 = (gcnew System::Windows::Forms::CheckBox());
			this->check_2 = (gcnew System::Windows::Forms::CheckBox());
			this->check_1 = (gcnew System::Windows::Forms::CheckBox());
			this->group_txt = (gcnew System::Windows::Forms::GroupBox());
			this->text_answer = (gcnew System::Windows::Forms::TextBox());
			this->btn_answer = (gcnew System::Windows::Forms::Button());
			this->group_yesno->SuspendLayout();
			this->group_single->SuspendLayout();
			this->group_multiple->SuspendLayout();
			this->group_txt->SuspendLayout();
			this->SuspendLayout();
			// 
			// text_questions
			// 
			this->text_questions->Location = System::Drawing::Point(9, 10);
			this->text_questions->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_questions->Multiline = true;
			this->text_questions->Name = L"text_questions";
			this->text_questions->ReadOnly = true;
			this->text_questions->Size = System::Drawing::Size(424, 61);
			this->text_questions->TabIndex = 0;
			// 
			// group_yesno
			// 
			this->group_yesno->Controls->Add(this->radio_no);
			this->group_yesno->Controls->Add(this->radio_yes);
			this->group_yesno->Location = System::Drawing::Point(10, 208);
			this->group_yesno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_yesno->Name = L"group_yesno";
			this->group_yesno->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_yesno->Size = System::Drawing::Size(214, 66);
			this->group_yesno->TabIndex = 1;
			this->group_yesno->TabStop = false;
			this->group_yesno->Text = L"Да/Нет";
			// 
			// radio_no
			// 
			this->radio_no->AutoSize = true;
			this->radio_no->Location = System::Drawing::Point(4, 39);
			this->radio_no->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_no->Name = L"radio_no";
			this->radio_no->Size = System::Drawing::Size(44, 17);
			this->radio_no->TabIndex = 6;
			this->radio_no->TabStop = true;
			this->radio_no->Text = L"Нет";
			this->radio_no->UseVisualStyleBackColor = true;
			// 
			// radio_yes
			// 
			this->radio_yes->AutoSize = true;
			this->radio_yes->Location = System::Drawing::Point(4, 17);
			this->radio_yes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_yes->Name = L"radio_yes";
			this->radio_yes->Size = System::Drawing::Size(40, 17);
			this->radio_yes->TabIndex = 5;
			this->radio_yes->TabStop = true;
			this->radio_yes->Text = L"Да";
			this->radio_yes->UseVisualStyleBackColor = true;
			// 
			// group_single
			// 
			this->group_single->Controls->Add(this->radio_single4);
			this->group_single->Controls->Add(this->radio_single3);
			this->group_single->Controls->Add(this->radio_single2);
			this->group_single->Controls->Add(this->radio_single1);
			this->group_single->Location = System::Drawing::Point(229, 75);
			this->group_single->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_single->Name = L"group_single";
			this->group_single->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_single->Size = System::Drawing::Size(204, 128);
			this->group_single->TabIndex = 2;
			this->group_single->TabStop = false;
			this->group_single->Text = L"Один ответ";
			// 
			// radio_single4
			// 
			this->radio_single4->AutoSize = true;
			this->radio_single4->Location = System::Drawing::Point(4, 85);
			this->radio_single4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_single4->Name = L"radio_single4";
			this->radio_single4->Size = System::Drawing::Size(14, 13);
			this->radio_single4->TabIndex = 10;
			this->radio_single4->TabStop = true;
			this->radio_single4->UseVisualStyleBackColor = true;
			// 
			// radio_single3
			// 
			this->radio_single3->AutoSize = true;
			this->radio_single3->Location = System::Drawing::Point(4, 63);
			this->radio_single3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_single3->Name = L"radio_single3";
			this->radio_single3->Size = System::Drawing::Size(14, 13);
			this->radio_single3->TabIndex = 9;
			this->radio_single3->TabStop = true;
			this->radio_single3->UseVisualStyleBackColor = true;
			// 
			// radio_single2
			// 
			this->radio_single2->AutoSize = true;
			this->radio_single2->Location = System::Drawing::Point(4, 41);
			this->radio_single2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_single2->Name = L"radio_single2";
			this->radio_single2->Size = System::Drawing::Size(14, 13);
			this->radio_single2->TabIndex = 8;
			this->radio_single2->TabStop = true;
			this->radio_single2->UseVisualStyleBackColor = true;
			// 
			// radio_single1
			// 
			this->radio_single1->AutoSize = true;
			this->radio_single1->Location = System::Drawing::Point(4, 20);
			this->radio_single1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radio_single1->Name = L"radio_single1";
			this->radio_single1->Size = System::Drawing::Size(14, 13);
			this->radio_single1->TabIndex = 7;
			this->radio_single1->TabStop = true;
			this->radio_single1->UseVisualStyleBackColor = true;
			// 
			// group_multiple
			// 
			this->group_multiple->Controls->Add(this->check_4);
			this->group_multiple->Controls->Add(this->check_3);
			this->group_multiple->Controls->Add(this->check_2);
			this->group_multiple->Controls->Add(this->check_1);
			this->group_multiple->Location = System::Drawing::Point(10, 75);
			this->group_multiple->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_multiple->Name = L"group_multiple";
			this->group_multiple->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_multiple->Size = System::Drawing::Size(214, 128);
			this->group_multiple->TabIndex = 2;
			this->group_multiple->TabStop = false;
			this->group_multiple->Text = L"Несколько ответов";
			// 
			// check_4
			// 
			this->check_4->AutoSize = true;
			this->check_4->Location = System::Drawing::Point(4, 85);
			this->check_4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->check_4->Name = L"check_4";
			this->check_4->Size = System::Drawing::Size(15, 14);
			this->check_4->TabIndex = 3;
			this->check_4->UseVisualStyleBackColor = true;
			// 
			// check_3
			// 
			this->check_3->AutoSize = true;
			this->check_3->Location = System::Drawing::Point(4, 63);
			this->check_3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->check_3->Name = L"check_3";
			this->check_3->Size = System::Drawing::Size(15, 14);
			this->check_3->TabIndex = 2;
			this->check_3->UseVisualStyleBackColor = true;
			// 
			// check_2
			// 
			this->check_2->AutoSize = true;
			this->check_2->Location = System::Drawing::Point(4, 41);
			this->check_2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->check_2->Name = L"check_2";
			this->check_2->Size = System::Drawing::Size(15, 14);
			this->check_2->TabIndex = 1;
			this->check_2->UseVisualStyleBackColor = true;
			// 
			// check_1
			// 
			this->check_1->AutoSize = true;
			this->check_1->Location = System::Drawing::Point(4, 20);
			this->check_1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->check_1->Name = L"check_1";
			this->check_1->Size = System::Drawing::Size(15, 14);
			this->check_1->TabIndex = 0;
			this->check_1->UseVisualStyleBackColor = true;
			// 
			// group_txt
			// 
			this->group_txt->Controls->Add(this->text_answer);
			this->group_txt->Location = System::Drawing::Point(229, 208);
			this->group_txt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_txt->Name = L"group_txt";
			this->group_txt->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->group_txt->Size = System::Drawing::Size(204, 66);
			this->group_txt->TabIndex = 3;
			this->group_txt->TabStop = false;
			this->group_txt->Text = L"Краткий ответ";
			// 
			// text_answer
			// 
			this->text_answer->Location = System::Drawing::Point(4, 17);
			this->text_answer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_answer->Name = L"text_answer";
			this->text_answer->Size = System::Drawing::Size(182, 20);
			this->text_answer->TabIndex = 5;
			// 
			// btn_answer
			// 
			this->btn_answer->Location = System::Drawing::Point(182, 279);
			this->btn_answer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_answer->Name = L"btn_answer";
			this->btn_answer->Size = System::Drawing::Size(98, 31);
			this->btn_answer->TabIndex = 4;
			this->btn_answer->Text = L"Ответить";
			this->btn_answer->UseVisualStyleBackColor = true;
			this->btn_answer->Click += gcnew System::EventHandler(this, &MyForm::btn_answer_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 328);
			this->Controls->Add(this->group_multiple);
			this->Controls->Add(this->btn_answer);
			this->Controls->Add(this->group_txt);
			this->Controls->Add(this->group_single);
			this->Controls->Add(this->group_yesno);
			this->Controls->Add(this->text_questions);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Тест Пицик 211";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->group_yesno->ResumeLayout(false);
			this->group_yesno->PerformLayout();
			this->group_single->ResumeLayout(false);
			this->group_single->PerformLayout();
			this->group_multiple->ResumeLayout(false);
			this->group_multiple->PerformLayout();
			this->group_txt->ResumeLayout(false);
			this->group_txt->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void display_question(test::Questions^ q)
		{
			group_multiple->Enabled = false;
			group_single->Enabled = false;
			group_yesno->Enabled = false;
			group_txt->Enabled = false;

			radio_single1->Checked = false;
			radio_single2->Checked = false;
			radio_single3->Checked = false;
			radio_single4->Checked = false;
			this->text_answer->Text = "";
			check_1->Checked = false;
			check_2->Checked = false;
			check_3->Checked = false;
			check_4->Checked = false;
			radio_yes->Checked = false;
			radio_no->Checked = false;

			switch (q->type)
			{
			case test::Test::yes_no:
				group_yesno->Enabled = true;
				break;

			case test::Test::txt_answer:
				group_txt->Enabled = true;
				break;

			case test::Test::single:
				group_single->Enabled = true;
				radio_single1->Text = q->answers[0];
				radio_single2->Text = q->answers[1];
				radio_single3->Text = q->answers[2];
				radio_single4->Text = q->answers[3];
				break;

			case test::Test::multiple:
				group_multiple->Enabled = true;
				check_1->Text = q->answers[0];
				check_2->Text = q->answers[1];
				check_3->Text = q->answers[2];
				check_4->Text = q->answers[3];
				break;
			}
			this->text_questions->Text = q->text;
		}

		int current_question ;
		array<test::Questions^>^ questions;
#pragma endregion
		//при обновлении формы будем рандомизировать вопросы
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		questions = test::test_dataset();
		test::randomize_questions(questions);
		current_question = 0;

		display_question(questions[current_question]);
	}

		   static int counter_of_correct = 0;
	private: System::Void btn_answer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (current_question < questions->Length)
		{
			test::Questions^ q = questions[current_question];
			switch (q->type)
			{
			//Да/нет
			case test::Test::yes_no:
				if ((radio_yes->Checked && (int)q->answer == 0) || (radio_no->Checked && (int)q->answer == 1))
				{
					counter_of_correct++;
					MessageBox::Show("Правильно!");
				}
				else
					MessageBox::Show("Неправильно! :(");
				break;

			//Краткий ответ
			case test::Test::txt_answer:
				if (text_answer->Text == System::Convert::ToString(q->answer))
				{
					counter_of_correct++;
					MessageBox::Show("Правильно!");
				}
				else
					MessageBox::Show("Неправильно! :(\n Правильный ответ: " + System::Convert::ToString(q->answer));
				break;

			//Один ответ
			case test::Test::single:
				if ((radio_single1->Checked && (int)q->answer == 0) || (radio_single2->Checked && (int)q->answer == 1) ||
					(radio_single3->Checked && (int)q->answer == 2) || (radio_single4->Checked && (int)q->answer == 3))
				{
					counter_of_correct++;
					MessageBox::Show("Правильно!");
				}
				else
					MessageBox::Show("Неправильно! :( \n Правильный ответ: " + (q->answers[(int)q->answer]));
				break;

			//Несколько ответов
			case test::Test::multiple:
				bool is_checked_only_correct = true;
				array<int>^ correct = (array<int>^)q->answer;
				for (int i = 0; i < correct->Length; ++i)
				{
					int cor = correct[i];
					if ((cor == 0 && !check_1->Checked) || (cor == 1 && !check_2->Checked) ||
						(cor == 2 && !check_3->Checked) || (cor == 3 && !check_4->Checked))
						is_checked_only_correct = false;
				}

				if (check_1->Checked && Array::IndexOf(correct, 0) == -1) {
					is_checked_only_correct = false;
				}
				if (check_2->Checked && Array::IndexOf(correct, 1) == -1) {
					is_checked_only_correct = false;
				}
				if (check_3->Checked && Array::IndexOf(correct, 2) == -1) {
					is_checked_only_correct = false;
				}
				if (check_4->Checked && Array::IndexOf(correct, 3) == -1) {
					is_checked_only_correct = false;
				}

				if (is_checked_only_correct)
				{
					counter_of_correct++;
					MessageBox::Show("Правильно!");
				}
				else
				{
					// строка для вывода 
					String^ string_to_print = "Неправильно! :( \n Правильный ответ: ";
					for (int i = 0; i < correct->Length; i++)
						string_to_print += System::Convert::ToString(q->answers[correct[i]]) + " ";

					MessageBox::Show(string_to_print);
				}
				break;
			}
		}

		
		current_question++;
		if (current_question < questions->Length) {
			display_question(questions[current_question]);
		}
		else
			MessageBox::Show("Поздравляем, Вы прошли тест! Ваш счёт: " + System::Convert::ToString(counter_of_correct) + " из " + System::Convert::ToString(questions->Length));
	}
};
}
