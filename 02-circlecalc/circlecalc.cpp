#include <iostream>

using namespace std;

int main()
{
   /*
    Calculating the Area and Circumference of a Circle
    1-Start
    2-Define the necessary variables (PI and r)
    3-Ask the user to enter a value for the variable r and read this value
    4-Calculate the area and circumference of the circle 
      (Area of the circle = PI * r * r) 
      (Circumference of the circle = 2 * PI * r)
    5-Display the result to the user as output
    6-End
   */


    const double PI = 3.14159265359;
    float radius;

    cout <<"Please enter a radius value:";
    cin >>radius;

    float area=PI*radius*radius;
    float circumference=2*PI*radius;

    cout <<"Area of the circle="<<area<<"\n";
    cout <<"Circumference of the circle="<<circumference<<"\n";
    return 0;
}
