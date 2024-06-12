//
// Created by bigyan on 6/12/24.
//WAP to calculate the area of cube, rectangle, circle using function overloading with at least one default argument.

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415

void area(double side = 1.0)
{
    double area1 = 6 * side * side;
    cout << "The area of the cube is: " << area1 << endl;
}
void area(double length, double breadth)
{
    double area2 = length * breadth;
    cout << "The area of the rectangle is: " << area2 << endl;
}
void area(double radius, char shape)
{
    if (shape == 'o')
    {
        double area3 = PI * radius * radius;
        cout << "The area of the circle is: " << area3 << endl;
    }
}

int main()
{
    double sde, lr, lb, r;
    char ch;


    cout << "Enter the lenght of side" << endl;
    cin >> sde;
    area(sde);

    cout << "Enter the length of rectangle" << endl;
    cin >> lr;
    cout << "Enter the length of rectangle" << endl;
    cin >> lb;

    area(lr, lb);

    cout << "Enter the radius" << endl;
    cin >> r;
    cout << "Enter the shape" << endl;
    cin >> ch;
    area(r, 'o');

    return 0;
}