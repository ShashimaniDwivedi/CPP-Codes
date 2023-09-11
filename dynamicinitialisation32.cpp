#include <iostream>
using namespace std;

class bankdeposit
{
  int principle;
  int years;
  int intrestRate;
  int returnValue;

public:
  bankdeposit() {}
  bankdeposit(int p, int y, float r);
  bankdeposit(int p, int y, int r);
  void show();
};

bankdeposit::bankdeposit(int p, int y, int r)
{
  principle = p;
  years = y;
  intrestRate = r;
  returnValue = principle;
  for (int i = 0; i < y; i++)
  {
    returnValue = returnValue * (1 + r);
  }
}
bankdeposit::bankdeposit(int p, int y, float r)
{
  principle = p;
  years = y;
  intrestRate = r;
  returnValue = principle;
  for (int i = 0; i < y; i++)
  {
    returnValue = returnValue * (1 + r);
  }
}

void bankdeposit::show()
{
  cout << "Principle amount was " << principle << "Return value after years" << returnValue << endl;
}

int main()
{
  bankdeposit bd1, bd2, bd3;
  int p, y;
  float r;
  int R;
  cout << "Enter the value of p,y and  r" << endl;
  cin >> p >> y >> r;
  bd1 = bankdeposit(p, y, r);
  bd1.show();

  return 0;
}