#include <iostream>
using namespace std;
// reverse of number
int main()
{
  int n, rem, reverse = 0;
  cerr << "Enter a number" << endl;
  cin >> n;

  while (n > 0)
  {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }
  cerr << reverse;
  return 0;
}