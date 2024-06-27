#include <iostream>

using namespace std;

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    int calculateVolume() {
        return length * breadth * height;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << calculateVolume() << endl;
    }
};

int main() {
    Box myBox(10, 5, 4);

    myBox.display();

    return 0;
}