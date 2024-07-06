#include <iostream>
using namespace std;

class SHAPE{
    protected:
    int value;
    public:
    SHAPE(int v){
        value = v;
    }
    virtual void FindPerimeter() = 0; 
};

class SQUARE: public SHAPE{
    public:
    SQUARE(int v): SHAPE(v){
    }
    void FindPerimeter() override {
        cout << "Perimeter of square: " << 4 * value << endl;
    }
};

class CIRCLE: public SHAPE{
    public:
    CIRCLE(int v): SHAPE(v){
    }
    void FindPerimeter() override {
        cout << "Circumference of circle: " << 2 * 3.14 * value << endl;
    }
};

int main(){
    SHAPE* s = new SQUARE(5);
    SHAPE* c = new CIRCLE(5);
    s->FindPerimeter();
    c->FindPerimeter();
    delete s;
    delete c;
    return 0;
}
