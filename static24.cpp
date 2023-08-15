#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

public:
  void setdata(void)
  {
    cout << "Enter the id" << endl;
    cin >> id;
    count++;
  }
  void getdata(void)
  {
    cout << " The id of Employee is : " << id << " and this is employee no " << count << endl;
  }
  static void getcount(void)
  {
    cout << "The value of count is : " << count << endl;
  }
};

// static variable are written out side the class

int Employee::count = 1000; // by default initialise with 0,we can change vlue here

int main()
{
  Employee manas, amit, raj;
  Employee::getcount();
  manas.setdata();
  manas.getdata();
  Employee::getcount();
  amit.setdata();
  amit.getdata();
  Employee::getcount();
  raj.setdata();
  raj.getdata();
  return 0;
}