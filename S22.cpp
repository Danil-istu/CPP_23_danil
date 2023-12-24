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
        cout << endl << "the numbers are written to a file" << endl << endl;
    }

    else{

        cout << endl << "error. the second number must be greater than the first" << endl;
        fout << "error. the second number must be greater than the first";
    }
    fout.close();

    ifstream fin;

    fin.open("output.txt");

    string str;
    int sequen_num = 1;

    while(!fin.eof()){

        str = "";
        getline(fin,str);
        cout << sequen_num++ << "." << str << endl;
    }

    cout << endl << "the last element in the file is the newline character" << endl;

    fin.close();

    return 0;
}
