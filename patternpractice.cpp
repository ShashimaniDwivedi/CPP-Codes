#include <iostream>
using namespace std;

int main()
{
  int n = 11;
  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      //if (row == n / 2 || row + column == (n - 1) / 2 || column - row == (n - 1) / 2)
       if (row == 0 || column == 0 || row == n - 1 || column == n - 1 || row + column <= (n - 1) / 2 || column - row >= (n - 1) / 2 || row - column >= (n - 1) / 2 || row + column >= (n - 1) + (n - 1) / 2)
      //if (row == 0 && column <= n / 2 || row <= n / 2 && column == 0 || row + column <= (n - 1) / 2)
       //if (row == n / 2 || row + column == (n - 1) / 2 || column - row == (n - 1) / 2 || row > n / 2 || row + column <= (n - 1) / 2 || column - row >= (n - 1) / 2)

      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}