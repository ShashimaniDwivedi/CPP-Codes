#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "Mahendra singh Dhoni";
   int i, vowel = 0;
   transform(name.begin(), name.end(), name.begin(), ::tolower);
   for (char ch : name)
   {
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
     {
       vowel++;
     }
   }
   cout << "Number of vowel in string is : " << vowel; 
  return 0;
}