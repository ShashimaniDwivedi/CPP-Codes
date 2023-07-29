#include <iostream>
using namespace std;

// typedef struct employee//typedef is used to give your choice name in main
//*************************structure*************************
// typedef struct employee
struct employee
{
  int id;
  char favchar;
  float salary;
} /*shivji*/;
//************************union******************************
union money
{
  int rice;
  char car;
  float pounds;
};

int main()
{
  //**************Enum***********************
  enum meal
  {
    breakfast,
    lunch,
    dinner
  };
  cout << breakfast << endl;
  cout << lunch << endl;
  cout << dinner << endl;
  struct employee manas;
  manas.id = 722047;
  manas.favchar = 's';
  manas.salary = 120000.0;
  cout << manas.salary << endl;
  // union
  union money m1;
  m1.rice = 34; // now if we want to print rice value it over writeit
  //m1.car = 'B';
  cout << m1.rice << endl;
  return 0;
}