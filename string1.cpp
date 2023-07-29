#include <iostream>
#include <string>
using namespace std;

string reverse(string str)
{
  string temp_str = str;
  int pos = 0;

  for (int x = temp_str.length() - 1; x >= 0; x--)
  {
    str[pos] = temp_str[x];
    pos++;
  }
  return str;
}

int main()
{
  string a;
  cout << "Enter string" << endl;
  cin >> a;
  cout << "\nReverse string: " << reverse(a);
  // cout << "\n\nOriginal string: Python";
  // cout << "\nReverse string: " << reverse("Python");
  return 0;
}
