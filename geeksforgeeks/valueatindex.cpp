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
  for (i = 0; i < n; i++)
  {
    if (arr[i] == (i + 1))
    {
      cout << arr[i] << endl;
    }
  }
  if (arr[i] != (i + 1))
  {
    cout << "No value matched";
  }

  return 0;
}