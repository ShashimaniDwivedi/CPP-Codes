#include <iostream>
using namespace std;

class Parent
{
public:
  int x = 10;

protected:
  int y = 20;

private:
  int z = 30;
};

class child1 : public Parent
{
  // x will remain public
  // y will remain protected
  // z will not be accessible
};

class child2 : private Parent
{
  // x will be private
  // y will be private
  // z will not be accessible
};

class child3 : protected Parent
{
  // x will be protected
  // y will be protected
  // z will not be accessible
};

int main()
{
  child1 c1;
  child2 c2;
  child3 c3;
  cout << c1.x;

  return 0;
}