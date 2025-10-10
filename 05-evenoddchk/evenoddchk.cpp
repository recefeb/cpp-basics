#include <iostream>

using namespace std;

int main()
{
    /*
        Program Name: evenoddchk
        Purpose: Check if a number is even or odd

        Algorithm:
        1. Start
        2. Declare variable 'number' to store user input
        3. Get input from the user
        4. If number % 2 == 0 then
               - Print "The number is even"
           Else
               - Print "The number is odd"
        5. End
    */

    int number;
    cout<<"Please enter a number: ";
    cin>>number;

    if(number%2==0){
        cout<<"The number is even"<<"\n";
    }else{
        cout<<"The number is odd"<<"\n";
    }

    
}