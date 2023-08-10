#include <iostream>
using namespace std;
int main()
{
  int m1[10][10], m2[10][10], res[10][10];
  int i, j, r, c;
  cout << "Enter the size of matrix" << endl;
  cin >> r >> c;
  cout << "Enter the element of first matrix";
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> m1[i][j];
    }
  }

  cout << "Enter the element of Second matrix";
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> m2[i][j];
    }
  }
  cout << endl
       << "Sum of two matrix are" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      res[i][j] = m1[i][j] + m2[i][j];
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}