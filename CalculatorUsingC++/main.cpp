#include <iostream>

using namespace std;

int main(){

int num1,num2;
char op;

cout<<"Enter the number:- ";
cin>>num1>>num2;

cout<<"Enter the opration:- +,-,/,%,* "<<endl;
cin>>op;
switch(op){
case '+':
       cout<<num1<<"+"<<num2<<"= "<<num1+num2<<"\n"<<"Total= "<<num1+num2;
       break;
       case '-':
       cout<<num1<<"-"<<num2<<"= "<<num1-num2<<"\n"<<"Total= "<<num1-num2;
       break;
       case'/':
       cout<<num1<<"/"<<num2<<"= "<<num1/num2<<"\n"<<"Total= "<<num1/num2;
       break;
       case '%':
       cout<<num1<<"%"<<num2<<"= "<<num1%num2<<"\n"<<"Total= "<<num1%num2;
       break;
       case '*':
       cout<<num1<<"*"<<num2<<"= "<<num1*num2<<"\n"<<"\nTotal= "<<num1*num2;
       break;
       default:
              cout<<"Error! operator is not correct";
              break;
}
return 0;
}














