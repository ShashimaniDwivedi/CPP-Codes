#include <iostream>
using namespace std;

int sum(int a, int b)
{
  cout << "using func with 2 argument" << endl;
  return a + b;
}

int sum(int a, int b, int c)
{
  cout << "using func with 3 argument" << endl;
  return a + b + c;
}
int volume(double r, int h)
{
  return (3.14 * r * r * h);
}
int volume(int a)
{
  return (a * a * a);
}
int volume(int L, int B, int H)
{
  return (L * B * H);
}

int main()
{
  cout << "The sum of value is : " << sum(3, 6) << endl;
  cout << "The sum of value is : " << sum(3, 6, 8) << endl;
  cout << "The value of cylinder is : " << volume(3, 6) << endl;
  cout << "The value  of cube is : " << volume(3) << endl;
  cout << "The value of rectangle  is : " << volume(3, 6, 2) << endl;
  return 0;
}