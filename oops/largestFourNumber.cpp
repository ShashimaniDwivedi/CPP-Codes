#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3, num4;
   cout << "Enter four numbers: ";
   cin >> num1 >> num2 >> num3 >> num4;

   int largest = (num1 > num2) ? ((num1 > num3) ? ((num1 > num4) ? num1 : num4) : ((num3 > num4) ? num3 : num4)) : ((num2 > num3) ? ((num2 > num4) ? num2 : num4) : ((num3 > num4) ? num3 : num4));

   cout << "The largest number is: " << largest << endl;
   return 0;
   }
