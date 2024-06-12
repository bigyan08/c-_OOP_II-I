//
// Created by bigyan on 6/12/24.
//
#include<iostream>
using namespace std;
int main(){
    int n, c=0, i;
    cout<<"enter a number:";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if((n%i)==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Prime Number";}
    else
    {cout<<"not a prime number";}
}
