#include <iostream>
#include <string>
using namespace std;
int main() {
    int number;
    char character;
    string text;

    cout << "Enter an integer: ";
    cin >> number;
    cin.ignore();

    cout << "Enter a character: ";
    cin.get(character);

    cout << "Enter a line of text: ";
    cin.ignore();
    getline(cin, text);

    cout << endl;
    cout << "Your input:"<<endl;
    cout << "Integer: " << number <<endl;
    cout << "Character: "<<character<<endl;
    cout << "Text: "<<text<<endl;

    cout << "\nPredefined message:"<< endl;
    cout << "Hello, World!"<<endl;

    return 0;
}