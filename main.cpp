#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "CompoundInt.h"

using namespace std;

// declare variables
double investment;
double deposit;
double interest;
int years;
string userInput;

int main() {
    userInput = "y";
    
    while (userInput == "y") {
        cout.width(36);
        cout.fill('*');
        cout << "" << endl;
        cout.width(12);
        cout.fill('*');
        cout << "" << " Data Input ";
        cout.fill('*');
        cout.width(12);
        cout << "" << endl;
        cout.width(36);
        cout.fill('*');
        cout << "" << endl;
        cout << "Enter initial investment amount: " << endl;
        cin >> investment;
        cout << "Enter monthly deposit amount: " << endl;
        cin >> deposit;
        cout << "Enter annual interest rate: " << endl;
        cin >> interest;
        cout << "Enter number of years to invest: " << endl;
        cin >> years;
        cout << "Press any key to continue..." << endl;

        CompoundInterest::printYearlyInt();
        CompoundInterest::yearlyInt(investment, interest, years);
        CompoundInterest::printYearlyIntPlusDep();
        CompoundInterest::yearlyIntPlusDep(investment, deposit, interest, years);

        cout << endl;
        cout << "Enter new information? y/n" << endl;
        cin >> userInput;
    }

    cout << "Goodbye." << endl;

    return 0;
}