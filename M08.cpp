
#include <iostream>
#include <math.h>

using namespace std;

const long double PI = 3.1415926535;

double get_angle(int A, int B, int C) {

    if (A > 0 && B > 0 && C > 0)
        {
        double cos = (C * C + B * B - A * A) / (2 * C * B);
        double AngleDeg = acos(cos) * (180.0 / PI);

        return AngleDeg;
        }
        else {
        cout << "Incorrect arguments." << endl;
        return 0;
    }
}

int main() {

    double A, B, C;

    cout << "enter the length of the first side of the triangle: ";
    cin >> A;

    cout << "enter the length of the second side of the triangle: ";
    cin >> B;

    cout << "enter the length of the third side of the triangle: ";
    cin >> C;

    double angle = get_angle(A, B, C);


    if (angle >= 0) {
        cout << endl << endl << "the angle opposite the first side: " << angle << " deg" << endl;
        }
        else {
        cout << "Incorrect arguments." << endl;
        return 0;
    }

    return 0;
}

