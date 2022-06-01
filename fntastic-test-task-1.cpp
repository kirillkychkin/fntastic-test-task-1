// fntastic-test-task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

std::map<char, int> create_dictionary(std::string row)
{
    std::map <char, int> dict;

    for (int i = 0; i < row.length(); ++i)
    {
        dict[row[i]] += 1;
    }

    return dict;
}

int main()
{
    std::string in_row;

    std::cout << "Please enter input row:\n";
    std::cin >> in_row;

    std::map <char, int> dict = create_dictionary(in_row);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


/*
* 1)���������� ���������� �������� � �������� ������ ��� ����������� ������
* 2)� ����� ��������� ������� � ������� ����-�������� ���� "a: 2, @: 9", 
* ��� ������ �������� ������, � ����� - ���������� ���, 
* ������� ���� ������ ����������� � �������� ������
* 3)������� �������� ������ � �����, �������� �������� �����
* ���� �������� > 1, �� �������� ")", � ��������� ������ "("
*/