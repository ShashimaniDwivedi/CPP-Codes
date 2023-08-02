#include <iostream>
using namespace std;

int sum(int a, int b); // function prototype/decleration

int main()
{
  // actual parameter num1,num2
  int num1, num2;
  cout << "Enter the number" << endl;
  cin >> num1;
  cout << "Enter the number" << endl;
  cin >> num2;
  cout << "The sum is :" << sum(num1, num2); // function call
  return 0;
}
// formal parameter a,b
int sum(int a, int b) // function defination
{
  int c = a + b;
  return c;
}