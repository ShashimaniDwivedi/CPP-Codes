#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[max], n;
  int i;
  cout << "Enter size" << endl;
  cin >> n;
  cout << "Enter element" << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i = i + 2)
  {
    cout << arr[i] << " ";
  }

  // cout << arr[i];

  return 0;
}