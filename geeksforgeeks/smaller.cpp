#include <iostream>
using namespace std;
#define max 50
int main()
{
  int arr[] = {1, 2, 4, 5, 8, 10};
  int i, x = 9, val = 0;
  for (i = 0; i < 6; i++)
  {
    if (arr[i] <= x)
    {
      val++;
    }
  }
  cout << val << endl;
  return 0;
}