#include <iostream>
using namespace std;
int main()
{
  int i, n, c;
  cout << "Enter number : " << endl;
  cin >> n;
  for (i = 2; i <= n; i++)
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