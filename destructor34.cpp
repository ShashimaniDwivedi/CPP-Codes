#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
  num()
  {
    count++;
    cout << "this is the time when constructor is called for object number :" << count << endl;
  }
  ~num()
  {
    cout << "This is the time when my destructor is called for object number :" << count << endl;
    count--;
  }
};

int main()
{
  cout << "we are inside main function " << endl;
  cout << "creating first objects n1" << endl;
  num n1;
  {
    cout << "entering the block" << endl;
    cout << "creating two or more object" << endl;
    num n2, n3;
    cout << "exiting the block" << endl;
  }
  cout << "back to main" << endl;
  return 0;
}