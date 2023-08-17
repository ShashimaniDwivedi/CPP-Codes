#include <iostream>
using namespace std;
// armstrong

int armstrong(int n)
{
  int sum = 0, rem;
  if (n == 0)
  {
    return 0;
  }
  else
  {
    while (n > 0)
    {
      rem = n % 10;                 // 153 % 10 = 3 , 15 % 10 = 5 , 1 % 10 = 1
      sum += (rem) * (rem) * (rem); // sum = 0 + 27 + 125 + 1
      n = n / 10;                   // 153 / 10 = 15 , 15 / 10 = 1; 1 / 10 = 0;
    }
  }
  return sum;
}
int main()
{
  int n, result, temp;
  cerr << "Enter a number : ";
  cin >> n;
  temp = n;
  result = armstrong(n);
  if (temp == result)
    cerr << "Armstrong no" << endl;
  else
    cerr << "Not Armstrong" << endl;
  return 0;
}