#include <iostream>
using namespace std;

class Employee
{
  int id;
  int salary;

public:
  void setid()
  {
    cout << "Enter id : " << endl;
    cin >> id;
    cout << "Enter salary : " << endl;
    cin >> salary;
  }
  void getid()
  {
    cout << "The id of this employee is : " << id << endl;
    cout << "The salary of this employee is : " << salary << endl;
  }
};

int main()
{
  Employee fb[4];

  for (int i = 0; i < 4; i++)
  {
    fb[i].setid();
    fb[i].getid();
  }
  return 0;
}