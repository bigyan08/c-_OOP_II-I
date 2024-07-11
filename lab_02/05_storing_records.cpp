#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static string batch;
    static string department;

public:
    Student(string n, int r) : name(n), rollNumber(r) {}

    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber 
             << ", Batch: " << batch << ", Department: " << department << endl;
    }
};


string Student::batch = "2080";
string Student::department = "WRC";

int main() {
    
    Student students[5] = {
        Student("Ram", 1),
        Student("Hari", 2),
        Student("John", 3),
        Student("David", 4),
        Student("Pasupati", 5)
    };

    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}