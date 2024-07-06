// create a class cricketer with member variables name, age, number of matches played . from this class derive two class bowler and batsman. bowler class has number of wickets as member variable and batsman class has number of runs and centuries as member variables. use appropriate member function in all classes to read and display respective data.
#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
    int matches;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of matches: ";
        cin >> matches;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches: " << matches << endl;
    }
};

class Bowler : public Cricketer {
    int wickets;
public:
    void getData() {
        Cricketer:: getData();
        cout << "Enter number of wickets: ";
        cin >> wickets;
    }

    void display() {
        Cricketer::display();
        cout << "Wickets: " << wickets << endl;
    }
};

class Batsman : public Cricketer {
    int runs;
    int centuries;
public:
    void getData() {
        Cricketer:: getData();
        cout << "Enter number of runs: ";
        cin >> runs;
        cout << "Enter number of centuries: ";
        cin >> centuries;
    }

    void display() {
        Cricketer::display();
        cout << "Runs: " << runs << endl;
        cout << "Centuries: " << centuries << endl;
    }
};

int main() {
    Bowler bowler;
    Batsman batsman;

    cout << "Enter details for Bowler:" << endl;
    bowler.getData();
    cout << "\nEnter details for Batsman:" << endl;
    batsman.getData();

    cout << "\nBowler details:" << endl;
    bowler.display();
    cout << "\nBatsman details:" << endl;
    batsman.display();

    return 0;
}