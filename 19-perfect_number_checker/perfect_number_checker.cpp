#include <iostream>
using namespace std;

/*
 * ALGORITHM: Perfect Number Checker
 *
 * A perfect number is a positive integer that equals the sum of its proper divisors
 * (divisors excluding the number itself).
 *
 * Steps:
 * 1. Read input number from user
 * 2. Initialize sum to 0
 * 3. Iterate from 1 to number/2 (since no divisor can be larger than half the number)
 * 4. For each iteration:
 *    - Check if current number (i) divides the input number evenly
 *    - If yes, add i to sum
 * 5. After loop completes, compare sum with original number
 * 6. If sum equals number, it's a perfect number
 * 7. Otherwise, it's not a perfect number
 *
 * Example: 6 is perfect because 1 + 2 + 3 = 6
 * Example: 28 is perfect because 1 + 2 + 4 + 7 + 14 = 28
 */

int main()
{
    int number, i, sum = 0;

    cout << "Please enter a number: ";
    cin >> number;

    for (i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        cout << number << " is a perfect number\n";
    }
    else
    {
        cout << number << " is not a perfect number\n";
    }
    return 0;
}