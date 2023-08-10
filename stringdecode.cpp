#include <iostream>
using namespace std;
int main()
{
  string str;
  cout << "Input string :" << endl;
  cin >> str;
  for (int i = 0; i < str.size(); i++)
  {
    char ch = ((str[i] - 'a' + 2) % 26) + 'a';
    str[i] = ch;
  }
  cout << str;
  return 0;
}