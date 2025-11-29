#include <iostream>
using namespace std;

/*
    FIBONACCI SEQUENCE GENERATOR ALGORITHM

    1. INITIALIZATION:
       - Declare variables: first, second, third (initialized to 1), number, i
       - These variables will store consecutive Fibonacci numbers

    2. INPUT:
       - Prompt user to enter the position (n) in Fibonacci sequence
       - Read the input number

    3. VALIDATION:
       - Check if number is less than or equal to 0
       - If invalid, display error message and exit program

    4. SPECIAL CASES:
       - If number == 1: Display only "1" (first Fibonacci number)
       - If number == 2: Display "1 1" (first two Fibonacci numbers)
       - If number > 2: Display "1 1 " and continue to calculation loop

    5. FIBONACCI CALCULATION LOOP (for number > 2):
       - Loop from i = 1 to i = number - 2
       - In each iteration:
         a) Shift values: first = second (move second to first position)
         b) Shift values: second = third (move third to second position)
         c) Calculate new value: third = first + second
         d) Display the new third value
       - This generates Fibonacci sequence: 1, 1, 2, 3, 5, 8, 13, ...

    6. TERMINATION:
       - Return 0 to indicate successful program execution
       */

int main()
{
    int first = 1, second = 1, third = 1, number, i;

    cout << "Please enter the Fibonacci sequence element number you want to see(only positive number): ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Please enter a valid value\n";
        return 0;
    }
    if (number == 1)
    {
        cout << "1\n";
    }
    else if (number == 2)
    {
        cout << "1 1\n";
    }
    else
    {
        cout << "1 1 ";
    }

    for (i = 1; i <= number - 2; i++)
    {
        first = second;
        second = third;
        third = first + second;
        cout << third << " ";
    }

    return 0;
}