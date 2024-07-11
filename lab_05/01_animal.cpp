#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    string name;

    Animal() : name("Animal") {}

    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    Dog() {
        name = "Dog";
        breed = "Unknown";
    }

    void speak() override {
        cout << "Dog barks" << endl;
    }

    void showBreed() {
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog myDog;
    myDog.breed = "Labrador";

    Animal myAnimal = myDog;

    cout << "Name: " << myAnimal.name << endl;
    myAnimal.speak();

    return 0;
}
