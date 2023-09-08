#include <iostream>
using namespace std;
#define max 50

int main()
{
  int m1[max][max], m2[max][max], res[max][max], i, j, r, c;
  cout << "Enter size of matrix" << endl;
  cin >> r >> c;
  cout << "Enter  element of matrix 1" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> m2[i][j];
    }
  }
  cout << "Enter  element of matrix 2" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> m1[i][j];
    }
  }
  cout << "Sum of matrix 1 and matrix 2" << endl;
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