#include <iostream>
using namespace std;
int prime(int n)
{
  // int c = 0;
  //  for (int j = 1; j <= n; j++)
  //  {
  //    if (n % j == 0)
  //    {
  //      c++;
  //    }
  //  }
  //  if (c == 2)
  //  {
  //    cout << "Number is prime";
  //  }
  //  else
  //  {
  //    cout << "number is not prime";
  //
  int c;
  for (int i = 2; i <= n; i++)
  {
    c = 0;
    for (int j = 1; j <= n; j++)
    {
      if (i % j == 0)
      {
        c++;
      }
    }
    if (c == 2)
    {
      cout << i << " ";
    }
  }
  return 0;
}
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;
  prime(n);

  return 0;
}