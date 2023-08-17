#include <iostream>
using namespace std;
// operator overloading
class complex
{
public:
  int real;
  int img;
  complex(int x, int y)
  {
    real = x;
    img = y;
  }
  complex operator+(complex &m)
  {
    complex ans(0, 0);
    ans.real = real + m.real;
    ans.img = img + m.img;
    return ans;
  }
};
int main()
{
  complex c1(2, 3);
  complex c2(1, 3);
  complex c3 = c1 + c2;
  cout << c3.real << " + "
       << "i" << c3.img;
}