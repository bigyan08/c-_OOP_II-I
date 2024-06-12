//
// Created by bigyan on 6/12/24.
//WAP to calculate the sum, difference and multiplication of two numbers using single function and display the result in main ()
#include<iostream>
using namespace std;
int calculate(float a, float b, char operation){
cout<<"enter first number:";
cin>>a;
cout<<"enter second number:";
cin>>b;
cout<<"enter the operation(+/-/*):";
cin>>operation;
switch(operation)
{
case '+':
    return a+b;
    break;
case '-':
    return a-b;
    break;
case '*':
    return a*b;
    break;
}

}
int main(){
    int a,b;
    char operation;
    cout<<calculate(a,b,operation);
    return 0;
}
