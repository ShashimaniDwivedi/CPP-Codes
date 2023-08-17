#include <iostream>
using namespace std;
// Abstract class because contains pure virtual function
class Base
{
public:
  virtual void fun() = 0; // pure virtual function
};

// This class inherits from Base and implements fun()
class Derived : public Base
{
public:
  void fun()
  {
    cout << "fun() called"; // pure virtual function implementation
  }
};

int main(void)
{
  Derived d;
  d.fun();
  return 0;
}
