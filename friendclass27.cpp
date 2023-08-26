#include <iostream>
using namespace std;

class complex; // forward decleration

class calculator
{

public:
  int add(int a, int b)
  {
    return a + b;
  }
  int sumcomplex(complex, complex);
  int sumcompcomplex(complex, complex);
};

class complex
{
  int a, b;
  // idividually declaring func as friend
  // friend int calculator::sumcomplex(complex, complex);
  // friend int calculator::sumcompcomplex(complex, complex);
  // after declearing whole class
  friend class calculator;

public:
  void setnum(int n1, int n2)
  {
    a = n1;
    b = n2;
  }

  void printnum()
  {
    cout << "Your number is : " << a << "+" << b << "i" << endl;
  }
};

int calculator::sumcomplex(complex a1, complex a2)
{
  return (a1.a + a2.a);
}
int calculator::sumcompcomplex(complex a1, complex a2)
{
  return (a1.b + a2.b);
}

int main()
{
  complex a1, a2;
  a1.setnum(1, 4);
  a2.setnum(5, 7);

  calculator calc;
  int res = calc.sumcomplex(a1, a2);
  cout << res << endl;
  res = calc.sumcompcomplex(a1, a2);
  cout << res;

  return 0;
}