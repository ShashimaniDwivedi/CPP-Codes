#include <iostream>
using namespace std;
class Fruit
{
public:
  string name = "Mango";
  string color = "Yellow";
};
int main()
{
  Fruit Mango; // Mango is object
  Mango.name;
  Mango.color;
  cout << Mango.name << " is " << Mango.color << endl;

  cout << "**********************" << endl;
  Fruit *mango = new Fruit(); // object pointer
  mango->color;
  mango->name;
  cout << mango->name << " is " << mango->color << endl;

  return 0;
}