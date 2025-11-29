#include <iostream>
using namespace std;

// Algorithm Steps:
// Step 1: Ask the user for an upper limit (number).
// Step 2: Loop through all integers from 1 up to the given number.
// Step 3: For each integer 'i':
//         - Initialize 'sum' to 0.
//         - Check every integer from 1 to i/2 to find divisors.
//         - If 'j' divides 'i', add 'j' to 'sum'.
// Step 4: After summing divisors, compare 'sum' with 'i'.
//         - If they are equal, print that 'i' is a perfect number.
// Step 5: After the loop ends, if the input is less than 6,
//         print that there are no perfect numbers in this range.

int main()
{
    int number, i, j, sum = 0;

    cout << "Please enter a number: ";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        sum = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i && i > 0)
        {
            cout << i << " is a perfect number\n";
        }
    }

    if (number < 6)
    {
        cout << "No perfect numbers found.\n";
    }
    cout << "\n";
    return 0;
}