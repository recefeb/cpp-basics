#include <iostream>
using namespace std;

int main() {

/*
Program Name: MonthDaysChecker
Algorithm:
1. Start the program
2. Declare a variable 'monthnum' to store the month number
3. Ask the user to input a number between 1 and 12
4. If the number is less than 1 or greater than 12, display an error and terminate
5. Use a switch-case statement to check the month:
   - Months 4, 6, 9, 11 → print "30 days"
   - Months 1, 3, 5, 7, 8, 10, 12 → print "31 days"
   - Month 2 → print "28 or 29 days"
6. End the program
*/

    short unsigned int monthnum;
    cout << "Please enter number of month (1 to 12): ";
    cin >> monthnum;

    if(monthnum < 1 || monthnum > 12) {
        cout << "Please enter a valid value\n";
        return 0;
    }

    switch(monthnum) {
        case 4:
        case 6:
        case 9:
        case 11: cout << "There are 30 days\n"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << "There are 31 days\n"; break;
        case 2: cout << "There are 28 or 29 days\n"; break;
    }

    return 0;
}
