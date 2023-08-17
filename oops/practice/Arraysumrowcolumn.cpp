#include <iostream>
#define max 50
using namespace std;
int main()
{
  int n, m, arr[max][max], sum, sum1, sumleft, sumright, sum2 = 0;
  cout << "Enter size : ";
  cin >> m >> n;
  cout << "Enter element : ";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  // sum of row
  for (int i = 0; i < m; i++)
  {
    sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += arr[i][j];
    }
    cout << "The sum of item in " << i + 1 << "Row of a matrix is : " << sum << endl;
  }
  // sum of column
  for (int i = 0; i < m; i++)
  {
    sum1 = 0;
    for (int j = 0; j < n; j++)
    {
      sum1 += arr[j][i];
    }
    cout << "The sum of item in " << i + 1 << "column of a matrix is : " << sum1 << endl;
  }
  // Sum of border element
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        sum2 = sum2 + arr[i][j];
      }
    }
  }
  cout << sum2;
  return 0;
}