#include <iostream>
using namespace std;
int main()
{
  int n1, n2, n3, n4;
  string largest;
  cerr << "Enter numbers" << endl;
  cin >> n1 >> n2 >> n3 >> n4;

  if (n1 > n2)
  {
    if (n1 > n3)
    {
      if (n1 > n4)
      {
        cout << "n1 is largest" << endl;
      }
      else
      {
        cout << "n4 is largest" << endl;
      }
    }
  }
  else if (n2 > n3)
  {
    if (n2 > n4)
    {
      cout << "n2 is largest" << endl;
    }
    else
    {
      cout << "n4 is largest" << endl;
    }
  }
  else if (n3 > n4)
  {
    cout << "n3 is largest" << endl;
  }
  else
  {
    cout << "n4 is largest" << endl;
  }
  return 0;
}