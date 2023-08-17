#include <iostream>
using namespace std;
int main()
{
  // int x = 10, y = 20;
  // x += y -= x; // easy trick to swap;
  //              /* x = x + y;
  //               y = x - y;
  //               x = x - y;*/
  // cout << x << " " << y << endl;
  // char ch;
  // cin >> ch;
  // int la = int(ch);
  // // cerr << int(ch) << endl;
  // if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
  //   cerr << "alphabet" << endl;
  // else
  //   cerr << "not an alphabet" << endl;
  // int z;
  // cin >> z;
  // if ((z % 5 == 0 || z % 3 == 0) && (z % 15 != 0))
  //   cerr << "divisible" << endl;
  // else
  //   cerr << "not" << endl;
  int b;
  cin >> b;
  // ternary operator
  (b >= 33) ? cerr << "pass" : cerr << "fail";

  return main();
}