#include <iostream>
using namespace std;

/*
 * ALGORITHM:
 * 1. Initialize variables:
 *    - number (user input)
 *    - i = 1 (counter for input sequence)
 *    - smallestNum = INT_MAX (initialize to maximum possible value)
 *    - largestNum = INT_MIN (initialize to minimum possible value)
 * 2. Display instruction: "Press 0 to exit the loop"
 * 3. DO
 *       Display prompt with counter: "i-th number: "
 *       Read number from user
 *       IF number == 0 THEN
 *          Break the loop
 *       END IF
 *       IF number < smallestNum THEN
 *          smallestNum = number
 *       END IF
 *       IF number > largestNum THEN
 *          largestNum = number
 *       END IF
 *       Increment i by 1
 *    WHILE number != 0
 * 4. Display the smallest number
 * 5. Display the largest number
 * 6. End program
 *
 * Logic: Continuously compare each input with current min/max values
 * and update them accordingly until user enters 0 to exit.
 */

int main()
{
    int number, i = 1, smallestNum = INT_MAX, largestNum = INT_MIN;
    cout << "Press 0 to exit the loop\n";
    do
    {
        cout << i << "th number: ";
        cin >> number;
        if (number == 0)
        {
            break;
        }
        if (number < smallestNum)
        {
            smallestNum = number;
        }
        if (number > largestNum)
        {
            largestNum = number;
        }
        i++;
    } while (number != 0);

    cout << "\nthe smallest number: " << smallestNum << "\n";
    cout << "\nthe largest number: " << largestNum << "\n";

    return 0;
}