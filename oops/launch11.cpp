#include <iostream>
using namespace std;
// *****************Single level inheritance**********************
/*  class parent
 {
 public:
   void print()
   {
     cout << "parent class "<<endl;
   }
 };
 class derived : public parent
 {
 public:
   void print1()
   {
     cout << "child class";
   }
 }; */
//*************************Multiple  Inheritance******************
/* class parent
{
public:
  void print1()
  {
    cout << "parent class" << endl;
  }
};
class parent1
{
public:
  void print2()
  {
    cout << "parent1 class" << endl;
  }
};
class derived : public parent, public parent1
{
public:
  void print3()
  {
    cout << "derived class";
  }
}; */
//*******************Multilevel Inheritance**************************
/* class parent
{
public:
  void print()
  {
    cout << "parent class " << endl;
  }
};
class derived : public parent
{
public:
  void print1()
  {
    cout << "derived class 1";
  }
};
class derived1 : public derived
{
public:
  void print2()
  {
    cout << "derived class 2";
  }
}; */
//***********************Hierarical Inheritance************************
/* class parent
{
public:
  void print1()
  {
    cout << "Parent class"<<endl;
  }
};
class child1 : public parent
{
public:
  void print2()
  {
    cout << "Child 1";
  }
};
class child2 : public parent
{
public:
  void print3()
  {
    cout << "Child 2";
  }
};
 */
class parent
{
public:
  void print1()
  {
    cout << "Parent class" << endl;
  }
};
class parent1
{
public:
  void print2()
  {
    cout << "parent1 class" << endl;
  }
};
class derived : public parent, public parent1
{
public:
  void print3()
  {
    cout << "derived class";
  }
};
class child1 : public parent
{
public:
  void print2()
  {
    cout << "Child 1";
  }
};
class child2 : public parent
{
public:
  void print3()
  {
    cout << "Child 2";
  }
};
int main()
{
  child2 d;
  d.print1();
  // d.print2();
  d.print3();

  return 0;
}