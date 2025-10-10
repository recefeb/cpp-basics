#include <iostream>
using namespace std;

/*
    Program Name: DayIdentifier
    Objective:
    Display the name of the day based on a number entered by the user (1 to 7).

    Steps:
    1. Start the program.
    2. Declare the necessary variable (day).
    3. Prompt the user to enter a number between 1 and 7.
    4. Check if the entered number is within the valid range.
    5. If it’s not, display an error message and terminate the program.
    6. Use a switch statement to determine the corresponding day:
       - 1 → Monday
       - 2 → Tuesday
       - 3 → Wednesday
       - 4 → Thursday
       - 5 → Friday
       - 6 → Saturday
       - 7 → Sunday
    7. Display the corresponding day name on the screen.
    8. End the program.
*/

int main() {
    int day;

    cout << "Please enter a day number (1 to 7): ";
    cin >> day;

    if (day < 1 || day > 7) {
        cout << "Please enter a valid value\n";
        return 0;
    }

    switch (day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
    }

    return 0;
}
