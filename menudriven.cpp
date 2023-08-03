#include <iostream>
using namespace std;

// Function Decleration

int Addition();
int Subtraction();
int Multiplication();
float Division();
int LCM();
int HCF();

int main()
{
  int sum, mul, div, sub, choice;
  char y, n, ch;
  cout << "*********MENU**********" << endl;
  cout << "\n1 :Addition";
  cout << "\n2 :Subtraction";
  cout << "\n3 :Division";
  cout << "\n4 :Multiplication";
  cout << "\n5 :LCM";
  cout << "\n6 :HCF";

  do
  {
    cout << "\nEnter  Your Choice" << endl;
    cin >> choice;

    switch (choice)
    {
      // Function call
    case 1:
      Addition();
      break;

    case 2:
      Subtraction();
      break;

    case 3:
      Division();
      break;

    case 4:
      Multiplication();
      break;

    case 5:
      LCM();
      break;

    case 6:
      HCF();
      break;

    default:
      cout << "Wrong choice Enter valid choice\n";
      break;
      // cin >> ch;
    }
    cout << "Do you want to continue press any key to continue else press : ";
    cin >> ch;
  } while (ch != 'n' || ch != 'N');
  // return

  // return 0;
}

// Function Defination

int Addition()
{
  int num1, num2, sum = 0;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  sum = num1 + num2;
  cout << "Sum is :" << sum << endl;
  return main();
  // return 0;
}

int Subtraction()
{
  int num1, num2, sub;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  sub = num1 - num2;
  cout << "Subtraction is :" << sub << endl;
  return main();
}

float Division()
{
  float num1, num2;
  float div;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  div = num1 / num2;
  cout << "Division  is : " << div << endl;
  return main();
}

int Multiplication()
{
  int num1, num2, mul;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  mul = num1 * num2;
  cout << "Multiplication is :" << mul << endl;
  return main();
}

int LCM()
{
  int num1, num2, max;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  max = (num1 > num2) ? num1 : num2;
  while (1)
  {
    if (max % num1 == 0 && max % num2 == 0)
    {
      cout << "The LCM of num1 and num2 is :" << max << endl;
      break;
    }
    max++;
  }
  return main();
}

int HCF()
{
  int num1, num2, max, hcf;
  cout << "Enter numbers :" << endl;
  cin >> num1 >> num2;
  int x = min(num1, num2);
  for (int i = 1; i <= x; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
      hcf = i;
  }
  cout << "The HCF of num1 and num2 is : " << hcf << endl;
  return main();
}