#include <iostream>
#include "calculator.h"
using namespace std;

char getOperator()
{
    char choice;
    char choice_arr[] = {'+', '-', '*', '/', '%'};
    bool operatorInvalid = true;
    cout << "select operator" << endl;
    cout << "[ + - * / % ]" << endl;
    cout << "> ";
    cin >> choice;

    for (int i = 0; i < 5; i++)
    {
        if (choice == choice_arr[i])
        {
            operatorInvalid = false;
            break;
        }
    }

    if (operatorInvalid)
    {
        cout << "invalid operator" << endl;
        exit(0);
    }

    return choice;
}