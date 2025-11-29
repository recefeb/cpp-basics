#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    Algorithm to print all prime numbers up to a user-entered number:

    1. Ask the user to enter a positive number greater than 1.
    2. For each number i from 2 up to the entered number:
   a. Assume i is prime.
   b. Calculate the square root of i to optimize the check.
   c. For each number j from 2 up to the square root of i:
    i.   If i is divisible by j, it is not prime and break the loop.
   d. If i is still prime after the loop, print it.
    */

    int number, i, j, root; // Necessary variables
    bool isPrime;           // Flag to determine if a number is prime

    cout << "Please enter a positive number: ";
    cin >> number;

    if (number < 2) // Stop the program if the number is less than 2, since the smallest prime is 2
    {
        cout << "Please enter a number greater than one\n";
        return 0;
    }

    for (i = 2; i <= number; i++) // Check each number from 2 up to the user's number
    {
        isPrime = true;             // Assume the number is prime
        root = sqrt(i);             // Calculate the square root to optimize the inner loop
        for (j = 2; j <= root; j++) // Check divisibility from 2 to sqrt(i)
        {
            if (i % j == 0) // If i is divisible by j
            {
                isPrime = false; // It is not prime
                break;           // Exit the inner loop
            }
        }
        if (isPrime) // If the number is still prime, print it
        {
            cout << i << " \n";
        }
    }

    return 0;
}
