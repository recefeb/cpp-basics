#include <iostream>

using namespace std;

int main()
{
 /*
    Program Name: basiccalculator
    Objective:
    Perform basic arithmetic operations (+, -, *, /) based on the operator entered by the user.

    Algorithm:
    1. Start the program.
    2. Declare variables: 'Operator' (char), 'num1' and 'num2' (float).
    3. Ask the user to choose an arithmetic operator (+, -, *, /).
    4. Validate the entered operator:
       - If it is not one of the valid symbols, display an error message and terminate the program.
    5. Prompt the user to enter two numbers.
    6. Use a switch statement to perform the corresponding operation:
       - '+' → Addition
       - '-' → Subtraction
       - '*' → Multiplication
       - '/' → Division
    7. Display the result of the operation.
    8. End the program.
*/

    
    char Operator;
    float num1,num2;

    cout<<"Choose operator(+,-,*,/): ";
    cin>>Operator;

     if (Operator!='+' && Operator!='-' && Operator!='*' && Operator!='/')
    {
        cout<<"Please choose a valid operator";
        return 0;
    }
    
    cout<<"Please enter two numbers: ";
    cin>>num1>>num2;


    switch(Operator)
    {
        case '+':
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;

        case '*':
        cout<<num1*num2;
        break;

        case '/':
        cout<<num1/num2;
        break;
    }

    return 0;
}