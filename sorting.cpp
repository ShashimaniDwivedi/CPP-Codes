#include <iostream>
#include <stdlib.h>

// sorting of an Array
using namespace std;
#define max 100 // macro
int main()
{
  int a[max];
  int n, i;
  cout << "Enter size of array" << endl;
  cin >> n;
  cout << "Enter element of an array" << endl;
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j]) // for ascending order
      // continue;  // for decending order
      {
        a[i] = a[i] + a[j]; // swapping
        a[j] = a[i] - a[j];
        a[i] = a[i] - a[j];
      }
    }
  }
  cerr << "content of Array After sorting" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << '\t';
  }
  cerr << "\nLargest element of an Array : " << a[n - 1] << endl;

  return 0;
}