#include <iostream>
using namespace std;
// inline function
inline int sum(int a, int b)
{
  //static int c = 0; // this execute only once in this don't use inline
  //c++;
  return a + b;
}
int main()
{
  int a, b;
  cout << "Enter number : " << endl;
  cin >> a >> b;
  cout << "The sum is : " << sum(a, b) << endl;
  cout << "The sum is : " << sum(a, b) << endl;
  cout << "The sum is : " << sum(a, b) << endl;
  cout << "The sum is : " << sum(a, b) << endl;
  return 0;
}