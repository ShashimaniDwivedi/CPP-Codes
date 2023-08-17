#include <iostream>
using namespace std;
int main()
{
  /* int n1, n2, hcf;
  cout << "Enter no : ";
  cin >> n1 >> n2;
  int min = (n1 < n2) ? n1 : n2;
  for (int i = 1; i <= min; i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
      hcf = i;
  }
  cout << "HCF is : " << hcf << endl;
  int Lcm = (n1 * n2) / hcf;
  cout << "LCM is : " << Lcm; */
  int n1, n2, lcm;
  cout << "Enter number : ";
  cin >> n1 >> n2;
  int max = (n1 > n2) ? n1 : n2;
  while (1)
  {
    if (max % n1 == 0 && max % n2 == 0)
    {
      cout << max;
      break;
    }
    max++;
  }

  return 0;
}
