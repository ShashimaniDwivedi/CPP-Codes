#include <iostream>
using namespace std;

class number
{
  int a;

public:
  number()
  {
    a = 0;
  }
  number(int num)
  {
    a = num;
  }
  number(number &obj)
  {
    cout << "copy constructor" << endl;
    a = obj.a;
  }
  void display()
  {

    cout << "The number for this object is : " << a << endl;
  }
};

int main()
{
  number x(87);
  x.display();
  number z(x);
  z.display();

  return 0;
}