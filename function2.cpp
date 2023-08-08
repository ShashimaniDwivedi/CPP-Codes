#include <iostream>
using namespace std;

int product(int a, int b)
{
  // static int c = 0; // this execute only once
  // c++;
  return a * b;
}

int main()
{
  int a, b;
  cout << "Enter he value of a and b";
  cin >> a >> b;
  cout << "the prouct of a and b :" << product(a, b);
  return 0;
}