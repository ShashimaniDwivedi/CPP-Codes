#include<iostream>
using namespace std;

int main()
{
  // int num1,num2;
  // cout<<"Enter the value of num1\n";//<< is called insertion operator
  // cin>>num1;
  // cout<<"Enter the value of num2\n";//>> is called extraction operator
  //  cin>>num2;
  // int sum=num1+num2;
  // cout<<"Sum is :\n"<<sum;
  //**************if else Ladder*************
  int age;
  cout<<"Tell me your Age";
  cin>>age;
  /*
  if (age<18)
  {
  cout<<"you can not come to party ";
  }
  else if(age==18)
  {
    cout<<"You are a kid,you get kid pass";
  }
  else{
    cout<<"You can come to party";
  }*/
  //**************Switchcase**************
  switch(age)
  {
    case 18:cout<<"you are Adult"<<endl;
    break;
    case (17):cout<<"you are not adult "<<endl;
    break;
    default:cout<<"No special case"<<endl;
  }
  return 0;
}