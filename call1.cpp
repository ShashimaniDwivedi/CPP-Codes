#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  // *******************call by refrence*************************
  int x = 50;
  int y = 40;
  swap(x, y);
  cout << "Value of x is: " << x << endl;
  cout << "Value of y is: " << y;
  return 0;
}
//******************call by value***************************
