// M2T2 - Receipt Calculator
// This program calculates a simple restaurant receipt including tax.

#include <iostream>

using namespace std;

int main() {
    // ----- Declare variables -----
    double mealPrice = 5.99;   // price before tax
    double taxPercent = 0.08;  // 8% tax rate
    double taxAmount;          // dollar amount of tax
    double total;              // final total including tax

    // ----- Calculate the values -----
    taxAmount = mealPrice * taxPercent;
    total = mealPrice + taxAmount;

    // ----- Print the results -----
    cout << "----- Cluck-O-Matic Receipt -----" << endl;
    cout << "Meal Price:  $" << mealPrice << endl;
    cout << "Tax (8%):    $" << taxAmount << endl;
    cout << "Total:       $" << total << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
