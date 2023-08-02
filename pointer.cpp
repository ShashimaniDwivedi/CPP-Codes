#include<iostream>
using namespace std;
int main(){

int a=3;
int*b=&a;
cout<<*b<<endl;//value at address a
int marks[4]={2,3,4,5};
for(int i=0;i<4;i++)
cout<<marks[i]<<endl;
// int i=0;
// while(i<4){
// cout<<marks[i]<<endl;
// i++;
// }
// int i=0;
// do{
//   cout<<marks[i]<<endl;
//   i++;
// }
// while( i<4);
//pointer and array
int *p=marks;
  cout<<"The value of marks[0] is :"<<*p<<endl;
  cout<<"The value of marks[1] is :"<<*(p+1)<<endl;
  cout<<"The value of marks[2] is :"<<*(p+2)<<endl;
  cout<<"The value of marks[3] is :"<<*(p+3)<<endl;
  cout<<"The value of marks[4] is :"<<*(p+4)<<endl;//suspecious
return 0;
}

