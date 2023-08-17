#include <iostream>
using namespace std;
// sum of digit
int main()
{
  int n, rem, sum = 0;
  cerr << "Enter a number" << endl;
  cin >> n;

  while (n > 0)
  {
    rem = n % 10;
    sum = sum + rem;
    n = n / 10;
  }
  cerr << "sum is = " << sum << endl;

  return 0;
}