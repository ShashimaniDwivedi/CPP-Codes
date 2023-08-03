#include <iostream>
#include <string>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chk_bin(void);
  void ones(void);
  void display(void);
};

void binary::read(void)
{
  cout << "Enter a binary number" << endl;
  cin >> s;
  chk_bin();
  ones();
  display();
}
void binary::chk_bin(void)
{

  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "incorrect binary format" << endl;
      exit(0);
    }
  }
}

void binary::ones(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary::display(void)
{
  cout << "ones complement" << endl;
  for (int i = 0; i < s.length(); i++)
  {

    cout << s.at(i);
  }
}
int main()
{

  // oops class and object
  // c++ initially called c with classes
  // classes are extension of structure
  // structure limitation :member are public , no methods
  binary b; // object making
  b.read();
  // b.chk_bin();
  // b.ones();
  // b.display();
  return 0;
}