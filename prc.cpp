// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, count = 0;
//   cout << "Enter no" << endl;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       count++;
//     }
//   }
//   if (count == 2)
//   {
//     cout << "prim" << endl;
//   }
//   else
//   {
//     cout << "not" << endl;
//   }

//   return 0;
// }

/**********************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int n, i, fact, j;
  cout << "Enter the Number";
  cin >> n;
  printf("Prime Numbers are: \n");
  for (i = 2; i <= n; i++)
  {
    fact = 0;
    for (j = 1; j <= n; j++)
    {
      if (i % j == 0)
        fact++;
    }
    if (fact == 2)
      cout << i << " ";
  }
  return 0;
}