#include <iostream>
using namespace std;

int main()
{
    int variab1;
    float variab2;
    double variab3;
    char variab4, variab5;

    cout << "enter the first variable of the type int: ";
    cin >> variab1;

    cout << "enter the second type variable float: ";
    cin >> variab2;

    cout << "enter the third type variable double: ";
    cin >> variab3;

    cout << "enter the fourth type variable char: ";
    cin >> variab4;

    cout << "enter the fifth  type variable char: ";
    cin >> variab5;

    long double summa = variab1 + variab2;
    cout << "The sum of the first and second variables is equal to: " << summa <<endl;

    long double differ = variab1 - variab3;
    cout << "The difference between the first and third variables is equal to: " << differ <<endl;

    long double multip = variab2 * variab3;
    cout << "the multiplication of the second and third variables is equal to: " << multip <<endl;

    long double quotient = variab3 / variab1;
    cout << "the quotient of the second and third variables is equal to: " << quotient <<endl;

    char summa_char = variab4 + variab5;
    cout << "the sum of the fourth and fifth variables is equal to: " << summa_char <<endl;

    return 0;
}


