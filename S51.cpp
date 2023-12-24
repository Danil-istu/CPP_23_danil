#include<iostream>
#include<string>

using namespace std;

void reversee(string line){

    int i;

    cout<<"Printing string in reverse: ";

    for(i = line.length() - 1; i >= 0; i--)
    {
       cout<<line[i];
    }
}

int main(){

    cout << "Enter the string: ";

    string str;
    cin >> str;

    reversee(str);

    cout << endl;

    return 0;
}
