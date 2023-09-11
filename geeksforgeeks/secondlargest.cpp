#include <iostream>
using namespace std;
#define max 50
int main()
{
  int n, i, arr[max];
  cout << "Enter size" << endl;
  cin >> n;
  cout << "Enter element" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[i] > arr[j])
      {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
      }
    }
  }
  cout << " second largest : " << arr[i - 2];
  return 0;
}