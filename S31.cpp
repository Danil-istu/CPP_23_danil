#include <iostream>
using namespace std;

const int max_length{6};

int main()
{
 int i;
 char name[][max_length]={"Zero","One","Two","Three","Four","Five","Six", "Seven","Eight","Nine"};

  cout << "enter a number from 0 to 9: ";
  cin>>i;

  cout<<name[i];

    return 0;
}
