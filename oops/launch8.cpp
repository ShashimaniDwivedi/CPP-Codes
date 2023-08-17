#include <iostream>
using namespace std;
// function overriding
class Parent
{
public:
  virtual void Print() // Ab run time pe decide hoga which func will be called
  {
    cerr << "parent class" << endl;
  }
  virtual void show()
  {
    clog << "parent class 1" << endl;
  }
};

class child : public Parent
{
public:
  void Print()
  {
    cerr << "child class" << endl;
  }
  void show()
  {
    clog << "child class 1" << endl;
  }
};

int main()
{

  Parent *p;
  child c;

  p = &c;
  p->Print();
  p->show();

  return 0;
}