#include <iostream>
using namespace std;
#define max 50
int main()
{
  int n, i, arr[max], sum = 0;
  ;
  cout << "Enter size" << endl;
  cin >> n;
  cout << "Enter element" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  cout << "Sum is : " << sum;

  return 0;
}