#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    Program Name: PerfectSquareCheck
    Objective: Determine if the square root of the entered number is an integer.

    Algorithm:
    1. Start the program.
    2. Declare variables to store the input number and the result.
    3. Prompt the user to enter a positive number.
    4. Read the input using 'cin'.
    5. If the input fails (not a number), display an error message and terminate.
    6. If the input number is zero or negative, display an error message and terminate.
    7. Calculate the square root of the number.
    8. If the square of the integer part of the root equals the original number:
         → Display that it is a perfect square.
       Else:
         → Display that it is not a perfect square.
    9. End the program.
    */

    int num, result;
    cout << "Please enter a positive number: ";
    cin >> num;

    if (cin.fail())
    {
        cout << "Please enter a valid value\n";
        return 0;
    }

    if (num <= 0)
    {
        cout << "Please enter a valid value\n";
        return 0;
    }

    result = sqrt(num);
    if ((result * result == num))
    {
        cout << num << " is a perfect square number\n";
    }
    else
    {
        cout << num << " is not a perfect square number\n";
    }

    return 0;
}