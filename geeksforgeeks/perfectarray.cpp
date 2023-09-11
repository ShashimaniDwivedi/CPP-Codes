#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[max], n;
  int i, j, rem, rev = 0;
  cout << "Enter size : ";
  cin >> n;
  cout << "Enter element : ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Orignal Array" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int j = 0; j < n / 2; j++)
  {
    if (arr[j] == arr[n - j - 1])
    {
      cout << "Perfect Array";
      break;
    }
    else
    {
      cout << "Not perfect";
      break;
    }
  }
  return 0;
}