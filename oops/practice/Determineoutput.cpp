#include <iostream>
using namespace std;
int main()
{
  /* int a = 6, h = 5, s = 8, p = 4, r = 3, A, B, C, K, M, D, E;
  A = ++h * --p * --h;
  cout << "h=" << h << "A=" << A << endl;
  B = ++a * 2 * --a;
  D = --a * ++a;
  E = ++a * --a * ++a;
  // K=++r+(4)--r;
  // cout<<"k="<<K<<"r="<<"M="<<M;
  C = p++ * 5 * p--;
  cout << "C=" << C << "p=" << p << endl; */
  int a = 5, b = 6, c = 7;
  int A = a * b++ + --c + c++;
  int B = a-- + a++ + a-- - c++;
  int C = A % b++;
  int D = ++a / b + c;
  int E = a++ / b * c;
  cout << A << " " << B << " " << C << " " << D << " " << E << endl;
  return 0;
}