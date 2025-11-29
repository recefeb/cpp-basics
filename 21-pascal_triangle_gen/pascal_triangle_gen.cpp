#include <iostream>
using namespace std;

/*
 * PASCAL'S TRIANGLE GENERATOR
 *
 * Algorithm:
 * 1. Get the number of rows from user
 * 2. Validate input (positive number check)
 * 3. For each row:
 *    a. Add spaces to create triangle shape (row - i spaces)
 *    b. Calculate all combination values for that row
 *    c. Combination formula: C(n,k) = n! / (k! * (n-k)!)
 *       - Optimization: Calculate using previous value at each step
 *       - First element is always 1
 *       - Next elements: previous * (i-j+1) / j
 * 4. Print each row to screen
 *
 * Pascal's Triangle Properties:
 * - Each row starts and ends with 1
 * - Each element equals the sum of the two elements above it
 * - The k-th element in the n-th row = C(n-1, k-1) (combination value)
 *
 * Time Complexity: O(n²)
 * Space Complexity: O(1) - only variables used
 */

int main()
{
    int i, space, row, j, number;

    // Get row count from user
    cout << "Please enter a row number: ";
    cin >> row;

    // Input validation - check for negative or zero
    if (row <= 0)
    {
        cout << "Please enter a valid value.";
        return 0;
    }

    // Loop for each row (from 0 to row)
    for (i = 0; i < row; i++)
    {
        // Add spaces at the beginning to create triangle shape
        for (space = 1; space < row - i; space++)
        {
            cout << "  ";
        }

        // Calculate and print numbers in each row
        for (j = 0; j <= i; j++)
        {
            // First element of each row is 1
            if (j == 0)
                number = 1;
            else
                // Combination calculation optimization
                // C(i,j) = C(i,j-1) * (i-j+1) / j
                number = number * (i - j + 1) / j;

            // Print number in formatted way
            cout << number << "   ";
        }

        // Move to new line at the end of row
        cout << "\n";
    }

    cout << "\n";
    return 0;
}