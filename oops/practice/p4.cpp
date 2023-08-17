#include <iostream>
using namespace std;
// palingrome
int main()
{
  int n, rem, sum = 0, temp;
  cerr << "Enter a number" << endl;
  cin >> n;
  temp = n;
  while (n > 0)
  {
    rem = n % 10;         // 121 % 10 = 1 ; 12 % 10 = 2; 1 % 10 = 1
    sum = sum * 10 + rem; // (0 * 10 + 1) +(1 * 10 + 2) +(12 * 10 + 1)
    n /= 10;              // 121 / 10 = 12; 12 / 10  = 1; 1/10=0;
  }
  if (temp == sum)
    cerr << "palindrome" << endl;
  else
    cerr << "not palindrome" << endl;
  return 0;
}