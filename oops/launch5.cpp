#include <iostream>
using namespace std;
// inheritance
class Parent
{
public:
  Parent()
  {
    cerr << "Parent class" << endl;
  }
};

class Parent1
{
public:
  Parent1()
  {
    cerr << "Parent1 class" << endl;
  }
};

class child : public Parent, public Parent1
{
public:
  child()
  {
    cout << "child class, Multiple inheritence" << endl;
  }
};

class child1 : public Parent, public Parent1
{
public:
  child1()
  {
    cout << "child1 class, Multiple inheritence" << endl;
  }
};

class Grandchild : public child1, public child // Diamond problem
{
public:
  Grandchild()
  {
    cout << " grandchild class" << endl; // Mulit level inheritence
  }
};
int main()
{
  Grandchild c;

  return 0;
}