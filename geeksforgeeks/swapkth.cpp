#include <iostream>
using namespace std;
#define max 50
int main()
{

  int arr[max], n, temp, k; // n=4,k= 3
  int i, j, rem, rev = 0;
  cout << "Enter size and k : ";
  cin >> n >> k;
  cout << "Enter element : ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {

    temp = arr[k - 1];
    arr[k - 1] = arr[n - k];
    arr[n - k] = temp;
  }
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}