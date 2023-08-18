#include <iostream>
using namespace std;

class complex
{

  int a, b;

public:
  void setnum(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  // below line means that sumcomplex are allowed to do any thing with private member
  friend complex sumcomplex(complex a1, complex a2); // friend function
  /*properties
  not in the scope of class
  can be declared in public or private
   it can not be accesed directely by their names and need object name
  */
  void printnum()
  {
    cout << "Your number is : " << a << "+" << b << "i" << endl;
  }
};

complex sumcomplex(complex a1, complex a2)
{
  complex a3;
  a3.setnum((a1.a + a2.a), (a1.b + a2.b));
  return a3;
}

int main()
{
  complex c1, c2, sum;
  c1.setnum(1, 4);
  c2.setnum(5, 8);
  c1.printnum();
  c2.printnum();

  sum = sumcomplex(c1, c2);
  sum.printnum();

  return 0;
}