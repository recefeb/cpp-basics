#include <iostream>

using namespace std;

int main()
{
    /*
    Algorithm:
    1. Start the program
    2. Declare variables: 'number' for input, 'i' as counter
    3. Ask the user to enter a number between 1 and 10
    4. Validate the input:
   - If the number is not within the range, display an error message and stop
    5. Use a while loop from 1 to 10
   - In each iteration, multiply 'number' by 'i' and display the result
    6. Increment 'i' by 1 until it reaches 10
    7. End the program
    */

    short int number, i = 1;
    cout << "Please enter a number (1 to 10): ";
    cin >> number;

    if ((number < 1) || (number > 10))
    {
        cout << "Please enter a valid value\n";
        return 0;
    }
    else
    {
        while (i <= 10)
        {
            cout << number << "x" << i << " = " << number * i << "\n";
            i++;
        }
    }
    return 0;
}