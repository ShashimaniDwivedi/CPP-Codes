#include <iostream>
using namespace std;

class complex
{
  int a, b;

public:
  complex(void)
  // complex::complex(void)
  {
    a = 10;
    b = 0;
  } // invoked mean called
  void printdata()
  {
    cout << "The value of a and b : " << a << " + " << b << 'i' << endl;
  }
};
// complex::complex(void)
// {
//   a = 10;
//   b = 0;
// }

int main()
{
  complex c;
  c.printdata();

  return 0;
}