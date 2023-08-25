#include <iostream>
#include <string>
using namespace std;

int Word(string text)
{

  int ctr = 0;
  for (int x = 0; x < text.length(); x++)
  {
    if (text[x] == ' ')
      ctr++;
  }
  return ctr + 1;
}

int main()
{
  string a;
  cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., \nnumber of words -> ";
  cout << Word("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
  cout << "Enter string" << endl;
  cin >> a;
  cout << "no of words" << Word(a);
  return 0;
}
