#include <iostream>
#include <cmath>
using namespace std;

/*
    Program Name: PrimeCheck (AsalSayiKontrol)

    Algorithm:
    1. Prompt the user to enter a positive integer greater than 1.
    2. Calculate the integer square root of the number.
    3. Initialize a control variable (assumed prime).
    4. Loop from 2 to the square root of the number:
         - If the number is divisible by any i in that range, set control to 0 and break.
    5. If control is 0 → number is not prime.
       Otherwise → number is prime.
    6. End the program.
*/
int main()
{

    int number, i, root, control = 1;

    cout << "Please enter a positive number: ";

    cin >> number;

    if (number < 2)
    {
        cout << "Please enter a number greater than one\n";
        return 0;
    }

    root = sqrt(number);
    for (i = 2; i <= root; i++)
    {
        if (number % i == 0)
        {
            control = 0;
            break;
        }
    }

    if (control == 0)
    {
        cout << number << " is not a prime number\n";
    }
    else
    {
        cout << number << " is a prime number\n";
    }
    return 0;
}