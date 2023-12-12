#include <iostream>

using namespace std;

double squared_sum(double number1, double number2){

double sum_1_2 = number2 + number1;
double square = sum_1_2 * sum_1_2;

return square;

}

int main(){

double num1, num2;

cout << "enter the first number: ";
cin >> num1;

cout << "enter the second number: ";
cin >> num2;

cout << endl << "the square of the sum of the two entered numbers = " << squared_sum(num1, num2) << endl;

    return 0;
}
