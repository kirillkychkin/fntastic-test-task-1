// fntastic-test-task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <cctype>

/*
* ������� ��������� �� ���� ������ ���� string,
* ���������� ������� ���� map<char, int>, ��� ������ �������� ������,
* � ��������� �������� ���������� ���, ������� ������ ����������� � ������
*/
std::map<char, int> create_dictionary(std::string row)
{
    std::map <char, int> dict;

    for (int i = 0; i < row.length(); ++i)
    {
        // tolower() ������������ ��� ������������� ��������� ���� ��� ��������
        dict[tolower(row[i])] += 1;
    }

    return dict;
}

/*
* ������� ��������� �� ���� �������� ������ string, ������� ���������� ���������������
* � ������� map<char, int>, ��������������� �������� create_dictionary
* ���������� ���������������� ������ string
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
* 1)���������� ���������� �������� � �������� ������ ��� ����������� ������
* 2)� ����� ��������� ������� � ������� ����-�������� ���� "a: 2, @: 9", 
* ��� ������ �������� ������, � ����� - ���������� ���, 
* ������� ���� ������ ����������� � �������� ������
* 3)������� �������� ������ � �����, �������� �������� �����
* ���� �������� > 1, �� �������� ")", � ��������� ������ "("
*/