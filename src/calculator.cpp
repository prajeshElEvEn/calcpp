#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
    char choice;
    int a, b, result = 0;

    cout << "select operator:" << endl;
    cout << "[ + - * / % ]" << endl;
    cout << "> ";
    cin >> choice;
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

    cout << result << endl;

    return 0;
}