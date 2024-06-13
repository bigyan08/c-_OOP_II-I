/*WAP to create a function which takes two arguments and returns the minimum value.
Call the function and assign it to a variable. Again, call this function and assign the value - 100.
Trace the output
 */
#include<iostream>
using namespace std;

int min(int a, int b){
return (a>b)?b:a;
}

int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int result_1=min(a,b);
    cout<<"the minimum number between "<<a<<" and "<<b<<" is "<<result_1<<endl;

    int result_2=min(result_1,-100);
    cout<<"the minimum number between "<<result_1<<" and "<<-100<<" is "<<result_2<<endl;
}