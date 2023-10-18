#include <iostream>

using namespace std;

int main(){
    int sum = 0;

    for (int number = 1; number <= 1000; number+=4){
        if (number % 7 ==0){
           sum += number;
        }
    }
    cout << sum << '\n';

    return 0;
}
