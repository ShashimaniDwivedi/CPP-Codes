#include <iostream>
using namespace std;

void selectionSort(int arr[4][4])
{
  for (int row = 0; row < 4; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      int minRowIndex = row;
      int minColIndex = col;

      // Find the minimum element in the remaining unsorted portion of the matrix
      for (int i = row; i < 4; i++)
      {
        for (int j = col; j < 4; j++)
        {
          if (arr[i][j] < arr[minRowIndex][minColIndex])
          {
            minRowIndex = i;
            minColIndex = j;
          }
        }
      }

      // Swap the minimum element with the current element
      int temp = arr[row][col];
      arr[row][col] = arr[minRowIndex][minColIndex];
      arr[minRowIndex][minColIndex] = temp;
    }
  }
}

void printMatrix(int matrix[4][4])
{
  for (int row = 0; row < 4; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cout << matrix[row][col] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int matrix[4][4] = {
      {5, 9, 3, 1},
      {8, 2, 7, 4},
      {6, 0, 9, 2},
      {3, 5, 1, 7}};

  cout << "Original matrix:" << endl;
  printMatrix(matrix);

  selectionSort(matrix);

  cout << "Sorted matrix:" << std::endl;
  printMatrix(matrix);

  return 0;
}