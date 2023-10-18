#include <iostream>

using namespace std;

int main()
{
    int number=0;
    while (number<=100){
        if (number % 3 ==0){
            cout<<number<<'\n';
        }
        number=number+1;
    }
    return 0;
}
