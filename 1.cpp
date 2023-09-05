#include <iostream>
using namespace std;
int main()
{
  int x = 20;
  int *y = &x;
  cout << *y << endl;
  cout << y << endl;
  return 0;
}