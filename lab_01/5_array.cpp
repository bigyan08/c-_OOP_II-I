//
// Created by bigyan on 6/12/24.
//
//WAP to create a dynamic array of size n and calculate the average of that array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;


    int *arr = new int[n];

    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }


    double average = (double)sum / n;

    cout << "Average of the array is: " << average << endl;


    delete[] arr;

    return 0;
}
