#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");

   int pif = 0, ssize;

   cout << "Введите размер таблицы Пифагора: ";
   cin >> ssize;

    for (int i = 1; i <= ssize; i++){
    cout << endl;
        for(int j = 1; j <= ssize; j++){
        pif = i * j;
        cout << '\t' << pif;
        }
   }

   cout << endl;

    return 0;

}
