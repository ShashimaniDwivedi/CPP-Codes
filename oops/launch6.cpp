#include <iostream>
using namespace std;
// polymorphisum
class Sum
{
public:
  void sum(int x, int y) // 1st fucn
  {
    cerr << "1st fucn" << endl;
    int sum = x + y;
    cerr << sum << endl;
  }
  void sum(int x, int y, int z) // 2nd func
  {
    cerr << "2nd func" << endl;
    int sum = x + y + z;
    cerr << sum << endl;
  }
  void sum(float x, float y, float z) // 3rd func
  {
    cerr << "3rd func" << endl;
    float sum = x + y + z;
    cerr << sum << endl;
  }
};
int main()
{
  Sum *s = new Sum();
  s->sum(2, 3);

  s->sum(2, 3, 6);
  s->sum(float(2.3), float(3.4), float(8.7));
  return 0;
}