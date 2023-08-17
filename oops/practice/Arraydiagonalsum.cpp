#include <iostream>
#define max 50
using namespace std;

int main()
{
  int matrix[max][max], SIZE;
  int sum_left = 0, sum_right = 0;
  cout << "Enter size : ";
  cin >> SIZE;
  cout << "Enter elements into the matrix \n";
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      cin >> matrix[i][j];
    }
  }
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      if (i == j)
        sum_left += matrix[i][j];
      if ((i + j) == SIZE - 1)
        sum_right += matrix[i][j];
    }
  }
  cout << "Sum of Left Diagonal: " << sum_left << endl;
  cout << "Sum of Right Diagonal: " << sum_right << endl;

  return 0;
}