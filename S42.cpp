#include <iostream>

using namespace std;

void sortt(int *A);

int main(){

    int massiv[10];
    for(int i=1; i<=10; i++){
        cout << i << ". enter a number: ";
        cin >> massiv[i];
    }

    sortt(massiv);

    return 0;
}

void sortt(int M[]){
    for (int i = 1; i <= 10; i++)
    {
    for (int j = 1; j <= 9; j++) {
      if (M[j] < M[j + 1]) {
        int b = M[j];
        M[j] = M[j + 1];
        M[j + 1] = b;
      }
    }
  }
    cout<< "sorted array: " << endl;

    int i=1;

    while (i<=10){
        cout<<M[i]<<"\t";
        i++;
    }
    cout<<endl;
}

