#include <iostream>
using namespace std;
#define max 100
int main()
{
  int i;
  char a[max] = {"The red brown fox jump over the lazy dog"};
  cout << a[14] << a[15] << a[16] << endl;
  // for(i=0;a[i]!='\0';i++)
  for (i = 0; i < sizeof(a); i++)
  {
    cout << a[i];
  }

  return 0;
}