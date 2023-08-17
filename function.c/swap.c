#include <stdio.h>

// void swap(int *x, int *y) // pass by value
// {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
//   return;
// }

int main()
{
  // int a = 2;
  // int b = 5;
  // swap(&a, &b); // pass by refrence
  // printf("The value of a is %d\n", a);
  // printf("The value of b is %d\n", b);
  // int p = 6;
  // int *q = &p;
  // printf("The value of q is %p", q);

  struct pokemon
  {
    int hp;
    int speed;
    int attack;
    char teir;
  };
  struct pokemon pikachu;
  pikachu.attack = 60;
  pikachu.hp = 50;
  pikachu.speed = 100;
  pikachu.teir = 'A';
  printf("%d", pikachu.attack);

  struct pokemon charizard;
  charizard.attack = 130;
  charizard.hp = 50;
  charizard.speed = 80;
  charizard.teir = 'S';
  return 0;
}