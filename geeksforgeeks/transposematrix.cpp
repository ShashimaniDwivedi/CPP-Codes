#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[max][max], r, c, temp, arrT[max][max];
  int i, j, rem, rev = 0;
  cout << "Enter size : ";
  cin >> r >> c;
  cout << "*************Orignal Matrix************" << endl;
  cout << "Enter element : \n";
  for (i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << "*************Transpose of Matrix*************" << endl;
  for (i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
       cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}