#include <iostream>
using namespace std;

class simple
{
  int data1, data2;

public:
  // simple(int a, int b = 4)//default argument
  simple(int a, int b)
  {
    data1 = a;
    data2 = b;
  }
  void printdata();
};
void simple::printdata()
{
  cout << "The value of data is : " << data1 << " and " << data2 << endl;
}

int main()
{
  // simple s(1);
  simple s(1, 4);
  s.printdata();
  return 0;
}