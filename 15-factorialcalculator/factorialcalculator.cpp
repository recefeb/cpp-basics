#include <iostream>
using namespace std;

/*
 * ALGORITHM:
 * 1. Initialize variables: number (user input), result = 1, i (loop counter)
 * 2. Prompt user to enter a positive number
 * 3. Read the input number
 * 4. IF number < 0 THEN
 *       Display error message "Please enter a valid value"
 *       Exit program
 * 5. IF number == 0 THEN
 *       Display "Factorial of the number: 1"
 *       Exit program
 * 6. FOR i = 1 TO number DO
 *       result = result * i
 *    END FOR
 * 7. Display "Factorial of the number: " followed by result
 * 8. End program
 *
 * Mathematical Definition: n! = n × (n-1) × (n-2) × ... × 2 × 1
 * Special Case: 0! = 1
 */

int main()
{
    int number, result = 1, i;
    cout << "Please enter a positive number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Please enter a valid value\n";
        return 0;
    }

    if (number == 0)
    {

        cout << "Factorial of the number: 1";
        return 0;
    }

    for (i = 1; i <= number; i++)
    {
        result *= i;
    }
    cout << "Factorial of the number: " << result;
    return 0;
}