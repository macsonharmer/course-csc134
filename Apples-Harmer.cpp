// CSC 134
// M1 Lab
// Macson Harmer
// 8/30/2026

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The owner's name
    string name = "macson harmer";

    // number of apples owned
    int apples = 100;

    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // print all the information about the orchard
    cout << "Welcome to " << name << "'s apple orchard." << endl;
    cout << "Apples owned: " << apples << endl;
    cout << "Price per apple: $" << pricePerApple << endl;
    cout << "Total price: $" << totalPrice << endl;
// Final line, to print totalPrice
cout << "If you want them all, that will be $" <<
totalPrice << endl;
    return 0;
}