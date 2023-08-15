#include <iostream>
#include <iomanip>
using namespace std;
int c = 51;
int main()
{
  //**********************Buildindatatype*************************

  int num1 = 5;
  int num2 = 7;
  int c;
  float d = 44.5;
  long double e = 44.5;
  cout << "The value of d is " << d << endl
       << "Th value of e is " << e << endl; // endl is known as manipulator
  cout << "Enter the value of num1 ";       //<< is known as insertion
  cin >> num1;                              //>>extraction operator
  cout << "Enter the value of num2 ";       //<< is known as insertion
  cin >> num2;
  c = num1 + num2;
  cout << "The sum is " << c << endl;
  cout << "The global varibal is " << ::c << "\n"; //:: scope resolution operator

  // *******************manipulators********************
  int a = 3, b = 78, C = 123;
  cout << "The value of a is " << setw(4) << a << endl; // setw provide space
  cout << "The value of b is " << setw(4) << b << endl;
  cout << "The value of C is " << setw(4) << C << endl;
  cout << "The value of a is " << a << endl;
  cout << "The value of b is " << b << endl;
  cout << "The value of C is " << C << endl;
  //*************************Typecasting***********************
  int x = 2;
  float y = 32.34;
  cout << "The value of x is " << float(x) << endl;
  cout << "The value of y is " << int(y);
  //************************Refrencevariable**********************
  // int e = 5;
  // int &f = e;
  // cout << "The value of e is " << e;
  // cout << "The value of f is " << f;
  // const int p = 5;
  // cout << "The value of p is " << p; // now the value can't be change because it is constant.
  return 0;
}