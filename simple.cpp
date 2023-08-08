#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < sizeof(a); i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}