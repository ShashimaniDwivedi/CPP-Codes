#include <iostream>
using namespace std;
// factorial programm using recursion
int factorial(int n); // function with parameter decleration

int main()
{
  int n;
  cout << "Enter a number" << endl;
  cin >> n;
  cout << "Factorial of " << n << " is : " << factorial(n) << endl;
  return 0;
}
// function defination
int factorial(int n)
{
  if (n <= 1) // base case
  {
    return 1;
  }
  return n * factorial(n - 1);
}