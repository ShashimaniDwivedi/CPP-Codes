#include <iostream>
using namespace std;
int main()
{
  int marks[] = {1, 2, 3, 4};
  //**********************for***********************************
  // for (int i = 0; i < 4; i++)
  // {
  //   cout << marks[i] << endl;
  // }
  //************************using dowhile**************************
  // int i = 0;
  // do
  // {
  //   cout << marks[i] << endl;
  //   i++;
  // } while (i < 4);
  //**********************while********************************
  int i = 0;
  while (i < 4)
  {
    cout << marks[i] << endl;
    i++;
  }

  return 0;
}