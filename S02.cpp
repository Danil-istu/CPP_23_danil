#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "enter the first number: ";
    cin >> number1;

    cout << "enter the second number: ";
    cin >> number2;

    int division = number1 / number2;
    cout << "The result is division: " << division << endl;

    int remainder = number1 % number2;
    cout << "the result of the remainder: " << remainder << endl;

    return 0;
}


