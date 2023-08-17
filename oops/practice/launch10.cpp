#include <iostream>
using namespace std;
class complex
{

  int a, b;
  // friend function
  friend complex sumcomplex(complex o1, complex o2);

public:
  void setNumber(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  void printNumber()
  {
    cerr << "Your number is : " << a << " + "
         << "i" << b << endl;
  }
};
complex sumcomplex(complex o1, complex o2)
{
  complex o3;
  o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}
int main()
{
  complex c, c1, sum;
  c.setNumber(4, 5);
  c.printNumber();
  c1.setNumber(5, 4);
  c1.printNumber();

  sum = sumcomplex(c, c1);
  sum.printNumber();
  return 0;
}