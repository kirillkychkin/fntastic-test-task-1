// fntastic-test-task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string in_row;
    int row_length;

    std::cout << "Please enter input row:\n";
    std::cin >> in_row;

    row_length = in_row.length();
    std::cout << row_length;

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