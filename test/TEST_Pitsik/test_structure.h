#pragma once
#include <vector>
#include <random>
#using <System.dll>

using namespace System;
namespace test
{
    // структура для Теста
    public enum struct Test
    {
        yes_no,
        single,
        multiple,
        txt_answer
    };

    //структура вопросов
    public ref struct Questions
    {
        System::String^ text; //формулировка вопроса
        array<System::String^>^ answers; //варианты ответа
        Test type; //тип ответа
        System::Object^ answer; //ответ 
    };

    // функция для перемешивания вопросов
    void randomize_questions(array<Questions^>^ arr) {
        Random^ rand = gcnew Random();
        for (int i = arr->Length - 1; i > 0; --i)
        {
            int j = rand->Next(0, i + 1);

            Questions^ temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //массив всех вопросов 
	array<Questions^>^ test_dataset() {
		array<Questions^>^ q = gcnew array<Questions^>(12);

		q[0] = gcnew Questions();
		q[0]->text = "C++, Python, C - это всё ______ (полное словосочетание)";
		q[0]->type = Test::txt_answer;
		q[0]->answer = "языки программирования";

        q[1] = gcnew Questions();
        q[1]->text = "Какой тип данных описывает целочисленный тип?";
        q[1]->type = Test::single;
        q[1]->answers = gcnew array<String^>{ "integer", "float", "boolean", "string" };
        q[1]->answer = 0;

        q[2] = gcnew Questions();
        q[2]->text = "C++ является надстройкой над C";
        q[2]->type = Test::yes_no;
        q[2]->answer = 0;

        q[3] = gcnew Questions();
        q[3]->text = "Каким языком является Python?";
        q[3]->type = Test::single;
        q[3]->answers = gcnew array<String^>{"Функциональным", "Интерпретируемым", "Транслируемым", "Компилируемым"};
        q[3]->answer = 1;

        q[4] = gcnew Questions();
        q[4]->text = "C++ - объектно-ориентированный ЯП";
        q[4]->type = Test::yes_no;
        q[4]->answer = 0;

        q[5] = gcnew Questions();
        q[5]->text = "Что из перечисленного является высокоуровневым ЯП?";
        q[5]->type = Test::multiple;
        q[5]->answers = gcnew array<String^>{"Python", "Assembler", "C", "Pandas"};
        q[5]->answer = gcnew array<int>{0, 2};

        q[6] = gcnew Questions();
        q[6]->text = "if в языках программирования является оператором _______";
        q[6]->type = Test::txt_answer;
        q[6]->answer = "условия";

        q[7] = gcnew Questions();
        q[7]->text = "Что из этого является языком для управления данными через запросы?";
        q[7]->type = Test::single;
        q[7]->answers = gcnew array < String^> {"PHP", "Python", "R", "SQL"};
        q[7]->answer = 3;

        q[8] = gcnew Questions();
        q[8]->text = "Как называется программа перевода языка высокого уровня в машинный код?";
        q[8]->type = Test::single;
        q[8]->answers = gcnew array<String^> {"Транслятор", "Архиватор", "Диспетчер кода", "ОС"};
        q[8]->answer = 0;

        q[9] = gcnew Questions();
        q[9]->text = "Выберите парадигмы программирования";
        q[9]->type = Test::multiple;
        q[9]->answers = gcnew array<String^> {"Функциональная", "Абстрактная", "Процедурная", "Объектно-ориентированная"};
        q[9]->answer = gcnew array<int>{0, 2, 3};

        q[10] = gcnew Questions();
        q[10]->text = "Что из этого является ЯП со строгой типизацией данных?";
        q[10]->type = Test::multiple;
        q[10]->answers = gcnew array<String^> {"Java", "Python", "JavaScript", "C++"};
        q[10]->answer = gcnew array<int>{0, 3};

        q[11] = gcnew Questions();
        q[11]->text = "HTML - язык программирования";
        q[11]->type = Test::yes_no;
        q[11]->answer = 1;

		return q;
	}
}