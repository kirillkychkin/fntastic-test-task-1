// fntastic-test-task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <cctype>

/*
* Функция принимает на вход строку типа string,
* Возвращает словарь типа map<char, int>, где символ является ключом,
* а значением является количество раз, которое символ встречается в строке
*/
std::map<char, int> create_dictionary(std::string row)
{
    std::map <char, int> dict;

    for (int i = 0; i < row.length(); ++i)
    {
        // tolower() используется для игнорирования заглавных букв при подсчете
        dict[tolower(row[i])] += 1;
    }

    return dict;
}

/*
* Функция принимает на вход исходную строку string, которую необходимо сконвертировать
* и словарь map<char, int>, сгенерированный функцией create_dictionary
* Возвращает конвертированную строку string
*/
std::string convert_row(std::string row, std::map <char, int> dict)
{
    std::string output_row;

    for (int i = 0; i < row.length(); ++i)
    {
        if (dict[row[i]] == 1)
        {
            output_row.append("(");
        }
        else {
            output_row.append(")");
        }
    }

    return output_row;
}

int main()
{
    std::string in_row;

    std::cout << "Please enter input row:\n";
    std::getline(std::cin, in_row);

    std::map <char, int> dict = create_dictionary(in_row);

    std::cout << convert_row(in_row, dict);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


/*
* 1)Подсчитать количество символов в исходной строке для прохождения циклом
* 2)В цикле заполнить словарь в формате ключ-значение типа "a: 2, @: 9", 
* где ключом является символ, а цифра - количество раз, 
* которое этот символ встречается в исходной строке
* 3)Вывести исходную строку в цикле, проверяя значение ключа
* если значение > 1, то выводить ")", в противном случае "("
*/