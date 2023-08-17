#include <iostream>
#include <string>
using namespace std;
// reverse of string
int main()
{
  string str;
  cerr << "Enter string : ";
  cin >> str;
  for (int i = str.length() - 1; i >= 0; i--)
    cerr << str[i];
  return 0;
}