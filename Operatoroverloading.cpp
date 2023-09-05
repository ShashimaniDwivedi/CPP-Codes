#include <iostream>
using namespace std;
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
  complex operator+(complex &obj)
  {
    complex ans(0, 0);
    ans.real = real + obj.real;
    ans.img = img + obj.img;
    return ans;
  }
};

int main()
{
  complex c1(2, 3);
  complex c2(1, 2);
  complex c3 = c1 + c2;
  cout << c3.real << " + "
       << "i" << c3.img;

  return 0;
}