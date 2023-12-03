#include <iostream>
#include <math.h>

using namespace std;

double get_square(int A, int N)
{
    double
    h,         //apopheme
    Perimetr,
    SNsquare;    //the area of the polygon


    h = A / (2 * tan((180 / N) * (3.141592 / 180)));
    Perimetr = A * N;
    SNsquare = (Perimetr * h) / 2;

    return SNsquare;

}


int main()
{
    int A, N;

    cout << "Enter the length of the sides ";
    cin >> A;

    cout << "Enter the number of sides ";
    cin >> N;

    cout << endl << endl << "the area of the polygon  " << get_square(A, N) << endl << endl;

    return 0;

}


