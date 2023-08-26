#include <iostream>
using namespace std;

int sum(int a, int b)
{
  int c = a + b;
  return c;
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x = 4, y = 5;
  cout << "The value of x is " << x << " and the value of y is " << y << endl;
  // swapPointer(&x,&y);
  swapReferenceVar(x, y);
  cout << "The value of x is " << x << " and the value of y is " << y << endl;
  return 0;
}
