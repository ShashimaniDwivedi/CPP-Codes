#include <iostream>
using namespace std;
int main()
{
  int i;
  string temp, names[] = {"Miles", "to", "Go", "Before", "You", "Sleep"};
  for (i = 0; i < 6; i++)
  {
    for (int j = i + 1; j < 6; j++)
    {
      if (names[i] < names[j])
      {
        temp = names[i];
        names[i] = names[j];
        names[j] = temp;
      }
    }
  }
  for (i = 0; i < 6; i++)
    cout << names[i] << " ";
  return 0;
}