#include <iostream>

using namespace std;

int main(){

    /*
Goal: Determine whether the entered number is positive, negative, or zero.

1-Read a number from the user.
2-If the number > 0 → print "Positive".
3-Else if the number < 0 → print "Negative".
4-Else (number == 0) → print "Zero".
5-End program.
*/

int number;
cout<<"Please enter a number: ";
cin>>number;

if(number>0){
    cout<<"Your number is positive"<<"\n";
}else if(number==0){
    cout<<"Your number is zero"<<"\n";
}else{
    cout<<"Your number is negative"<<"\n";
}

return 0;
}