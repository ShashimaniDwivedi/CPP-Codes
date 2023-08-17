#include <iostream>
using namespace std;
// fibonacci;
int main()
{
  int n1 = 0, n2 = 1, num, n3;
  cout << "Enter number : ";
  cin >> num;
  cout << n1 << " " << n2 << " ";
  for (int i = 2; i < num; i++)
  {
    n3 = n2 + n1;      // 0+1,1+1,1+2
    cerr << n3 << " "; // 1,2
    n1 = n2;           // n1=1,1
    n2 = n3;           // n2=1,2
  }

  return 0;
}
/*
#include <iostream>
using namespace std;
// fibonacci using recursion;
int fibo(int num)
{
  int result;
  if (num == 0 || num == 1)
  {
    return num;
  }
  else
  {
    result = fibo(num - 1) + fibo(num - 2);
  }
  return result;
}
int main()
{
  int n1 = 0, n2 = 1, num, n3;
  cout << "Enter number" << endl;
  cin >> num;
  fibo(num);
  for (int i = 0; i <= num; i++)
  {
    cout << fibo(i) << " ";
  }
  return 0;
}
*/