#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;

    int A, B;

    cout << "enter the first number: ";
    cin >> A;

    cout << "enter the second number: ";
    cin >> B;

    fout.open("output.txt");

    if (B>A){
       for (int i = A; i <= B; i++){

        fout << i * 3;
        fout << endl;

        }
        cout << endl << "the numbers are written to a file" << endl;
    }

    else{

        cout << endl << "error. the second number must be greater than the first" << endl;
        fout << "error. the second number must be greater than the first";
    }

    fout.close();

    return 0;
}
