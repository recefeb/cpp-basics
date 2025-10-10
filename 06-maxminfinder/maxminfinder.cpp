#include <iostream>

using namespace std;

int main()
{
    /*
    Objective: Identify the maximum and minimum values among three input numbers

    Algorithm:
    1. Initialize the program
    2. Declare necessary variables to store the numbers
    3. Compare the numbers using if-else logic to determine:
       - Maximum value
       - Minimum value
    4. Output the maximum and minimum values
    5. Terminate the program
    */

    int x,y,z,max,min;
    cout<<"Please enter three numbers: ";
    cin>>x>>y>>z;

    if(x>y && x>z){
        max=x;
        min= (y<z)? y: z;
    }else if(y>x && y>z){
        max=y;
        min= (x<z)? x: z;
    }else{
        max=z;
        min= (x<y)? x: y;
    }

    cout<<"Max number is: "<<max<<"\n";
    cout<<"Min number is: "<<min<<"\n";
}