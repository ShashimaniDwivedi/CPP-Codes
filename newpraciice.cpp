#include <iostream>
using namespace std;
int main()
{
  int x[] = {1, 2, 3, 4, 5};
  char p[] = {'m', 'a', 'n', 'a', 's'};
  // string p = {"The quick brown fox jump over the lazy dog"};
  int *y;
  char *u;
  u = &p[0];
  y = &x[4];
  cout << y << " " << *y << " " << u << " " << *u << " " << &u << endl;

  return 0;
}