#include <iostream>
using namespace std;
// prime no upto n
int main()
{
  int n, count;
  cout << "Enter no :" << endl;
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    count = 0;
    for (int j = 1; j <= n; j++)
    {
      if (i % j == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      cout << i << " ";
    }
  }
  return 0;
}