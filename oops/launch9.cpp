#include <iostream>
using namespace std;
// friend function
class A
{
  int x = 10; // private
protected:
  int y = 20;
  friend void print(A &obj);
};

void print(A &obj)
{
  cerr << obj.x << endl;
  cout << obj.y << endl;
}
int main()
{
  A obj;
  print(obj);

  return 0;
}