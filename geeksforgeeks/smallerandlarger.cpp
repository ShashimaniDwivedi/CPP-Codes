#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[max], n, temp, x, count;
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
      if (arr[i] > arr[j])
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
  cout << "Enter element : " << endl;
  cin >> x;
  for (i = 0; i < n; i++)
  {
    if (arr[i] < x)
    {
      count++;
    }
  }
  cout << count;
  return 0;
}