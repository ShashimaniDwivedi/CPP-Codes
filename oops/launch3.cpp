#include <iostream>
using namespace std;
// Encapsulation
class ABC
{
  int x;

public:
  void setdata(int n)
  {
    x = n;
  }
  int getdata()
  {
    return x;
  }
};

int main()
{
  ABC obj;
  obj.setdata(3);
  cout << obj.getdata() << endl;

  return 0;
}