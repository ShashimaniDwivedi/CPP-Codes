#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[max], n, temp;
  int i, j, rem, rev = 0;
  cout << "Enter size : ";
  cin >> n;
  cout << "Enter element : ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] < arr[j])
      {
        // swap
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    cout << arr[i] << " ";
  }
  cout << endl;
  for (i = 2; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}