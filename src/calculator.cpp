#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
    char choice;
    char choice_arr[] = {'+', '-', '*', '/', '%'};
    bool operatorInvalid = true;
    int a, b, result = 0;

    cout << "------------------------------" << endl;
    cout << "calculator by @eleven" << endl;
    cout << "------------------------------" << endl;

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

    cout << "enter two operands" << endl;
    cout << "> ";
    cin >> a >> b;

    if (choice == '+')
    {
        result = getSum(a, b);
    }
    else if (choice == '-')
    {
        result = getDiff(a, b);
    }
    else if (choice == '*')
    {
        result = getPro(a, b);
    }
    else if (choice == '/')
    {
        result = getQuo(a, b);
    }
    else if (choice == '%')
    {
        result = getMod(a, b);
    }
    else
    {
        cout << "invalid choice" << endl;
    }

    cout << "result" << endl;
    cout << result << endl;
    cout << "------------------------------" << endl;

    return 0;
}