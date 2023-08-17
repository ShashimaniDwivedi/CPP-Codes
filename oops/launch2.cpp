#include <iostream>
using namespace std;
// Constructor
class rectangle
{
public:
  int length;
  int breath;

  rectangle() // default constructor   1
  {
    length = 10;
    breath = 20;
  }
  rectangle(int x, int y) // parametrised constructor   2
  {
    length = x;
    breath = y;
  }
  rectangle(rectangle &v) // copy constructor  3
  {
    length = v.length;
    breath = v.breath;
  }
  ~rectangle()
  {
    cout << "Destructor is called" << endl;
  }
};

int main()
{
  rectangle *r = new rectangle();
  cout << "Area of rectangle :" << (r->length) * (r->breath) << endl; // 1
  delete r;
  rectangle r1(12, 12); // 2
  cout << "Area of rectangle :" << (r1.length) * (r1.breath) << endl;
  rectangle r3 = r1; // 3
  cout << "Area of rectangle :" << (r3.length) * (r3.breath) << endl;
  delete r;
  return 0;
}