#include <iostream>
using namespace std;
// factorial
int main()
{
  int num, count = 1;
  cerr << " Enter number" << endl;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    count *= i;
  }
  cerr << count;
  return 0;
}

// int prime(int n)
// {
//   int c = 0;
//   for (int i = 1; i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       c++;
//     }
//   }
//   if (c == 2)
//   {
//      cout << "Prime Number" << endl;
//   }
//   else
//   {
//     cout << "Not Prime Number";
//   }
//   return 0;
// }
