/* 3.11 LAB: Exact change
Write a program with total change amount as an integer input, and output the change using the fewest coins,
one coin type per line.The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies.
Use singularand plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

Ex : If the input is :

0
(or less than 0), the output is :

No change
Ex : If the input is :

45
the output is :

1 Quarter
2 Dimes
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // variables
    int changeAmount;
    double Dollars,
        Quarters,
        Dimes,
        Nickels,
        Pennies;
    //input
    cin >> changeAmount;

    //process
    Dollars = changeAmount / 100.0;

    int placeHolder = Dollars; 
    double deci = Dollars - placeHolder;

    Quarters = deci / .25;
    deci = deci - (.25 * static_cast<int>(Quarters));
    
    Dimes = deci / .10;
    deci = deci - (.10 * static_cast<int>(Dimes));

    cout << deci << " deci" << endl;
    Nickels = deci / .05;
    deci = deci - (.05 * static_cast<int>(Nickels));
    cout << deci << " deci" << endl;
    
    Pennies = deci * 100;
    

    //output




    
    cout << Dollars << " Dollars" << endl;
    cout << Quarters << " Quarters" << endl;
    cout << Dimes << " Dimes" << endl;
    cout << Nickels << " Nickels" << endl;
    cout << Pennies << " Pennies" << endl;
    
    return 0;
}


/*
Dollars = changeAmount / 100.0;
    int cent = Dollars;
    double aCents = Dollars - cent;
    //cout << aCents << " aCent test" <<endl;

    Quarters = (changeAmount - (Dollars * 100)) / 25;
    Dimes = (changeAmount - (Dollars * 100)) / 10;
    int plHl = Dimes;
    double plHl2 = Dimes - plHl;
    //cout << plHl2 << " Dime amount test" << endl;
    Nickels = (plHl2 * 10) / 5;
    Pennies = ((plHl2 * 10) -5) / 1;
    //Nickels = (changeAmount - (Dollars * 100)) / 5;


*/