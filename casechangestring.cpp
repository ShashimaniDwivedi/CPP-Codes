#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Case(string text)
{

  for (int x = 0; x < text.length(); x++)
  {
    if (isupper(text[x]))
    {
      text[x] = tolower(text[x]);
    }
    else
    {
      text[x] = toupper(text[x]);
    }
  }

  return text;
}

int main()
{
  string a;
  cout << "Enter string" << endl;
  cin >> a;
  cout << " After changing cases-> " << Case(a) << endl;

  return 0;
}
