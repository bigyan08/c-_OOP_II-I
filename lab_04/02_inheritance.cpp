#include <iostream>
using namespace std;

class Student
{
private:
    int roll;

public:
    void sget()
    {
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void sdisplay() const
    {
        cout << "Roll: " << roll << endl;
    }

    int getRoll() const
    {
        return roll;
    }
};

class Test : virtual public Student
{
private:
    string name;
    int age;
    float marks;

public:
    void tget()
    {
        sget();
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void tdisplay() const
    {
        sdisplay();
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }

    float getMarks() const
    {
        return marks;
    }
};

class Sports : virtual public Student
{
private:
    int price;

public:
    void ssget()
    {
        cout << "Enter price: ";
        cin >> price;
    }

    void ssdisplay() const
    {
        cout << "Price: " << price << endl;
    }

    int getPrice() const
    {
        return price;
    }
};

class Result : public Test, public Sports
{
private:
    float fee = 10000.00;
    float percentage;

public:
    void rget()
    {
        tget();
        ssget();
        percentage = (getMarks() / 100) * 100;
    }

    void rdisplay() const
    {
        tdisplay();
        ssdisplay();
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main()
{
    Result result;
    result.rget();
    result.rdisplay();
    return 0;
}
