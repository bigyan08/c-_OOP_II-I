#include <iostream>

using namespace std;

class base1{
    private:
      int roll;
    public:
        base1(){
            cout<<"Student constructor"<<endl;
        }
        ~base1(){
            cout<<"Student destructor"<<endl;
        }
};

class base2{
    private:
        string name;
    public:
        base2(){
            cout<<"Test constructor"<<endl;
        }
        ~base2(){
            cout<<"Test destructor"<<endl;
        }
};

class derived: public base1, public base2{
    private:
        int fee;
    public:
        derived(){
            cout<<"Result constructor"<<endl;
        }
        ~derived(){
            cout<<"Result destructor"<<endl;
        }
};

int main(){
    derived d;
    return 0;
}