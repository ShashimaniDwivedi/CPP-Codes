#include <iostream>
using namespace std;
int main()
{
  int sum = 0, i;
  int arr[] = {3, 2, 1, 4};
  for (i = 0; i < 4; i++)
  {
    sum = sum + arr[i];
  }
  cout << sum << endl;
  return 0;
}