#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // using strcpy
  char string1[] = "Good";
  char string2[] = "Morning";
  strcpy(string1, string2);
  cout << "The result of strcpy is : " << string1 << '\n';
  // using strcat
  char string3[] = "Good";
  char string4[] = "Morning";
  strcat(string3, string4);
  cout << "The result of strcat is : " << string3 << '\n';
  // using strlen
  char string5[] = "Good";
  cout << "The result of strlen is : " << strlen(string5) << '\n';
  // using strcmp
  char string6[] = "Morning";
  char string7[] = "Morning";
  strcmp(string5, string6);
  cout << "The result of strcmp is : " << strcmp(string6, string7) << '\n';
  // using strchr
  char string8[] = "Good Morning";
  char ch = 'a';
  if (strchr(string8, ch))
    cout << "The character " << ch << " is present in the string " << string8 << '\n';
  else
    cout << "The character " << ch << " is not present in the string " << string8 << '\n';
  char string9[] = "Morning";
  char string10[] = "Morning";
  strcmp(string5, string6);
  cout << "The result of strlwr is : " << strlwr(string9) << '\n';
  cout << "The result of strupr is : " << strupr(string10) << '\n';
}