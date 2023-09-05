#include <iostream>
using namespace std;

class complex
{
  int a, b, c;

public:
  complex(int x, int y) // parametrised constructor
  // complex::complex(void)
  {
    a = x;
    b = y;
  }                            // invoked mean called
  complex(int p, int q, int r) // constructor overloading
  {
    a = p;
    b = q;
    c = r;
  }
  void printdata()
  {
    cout << "The value of a and b : " << a << " + " << b << 'i' << endl;
  }
};

int main()
{
  complex a(3, 4);
  // complex b = complex(2, 3);
  complex b(2, 3);
  complex d(1, 2);
  a.printdata();
  b.printdata();
  d.printdata();

  return 0;
}