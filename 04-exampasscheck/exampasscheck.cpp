#include <iostream>

using namespace std;

int main(){
    /*
    This program checks if a student has passed the course.
    Steps:
    1- Start
    2- Declare variables
    3- Get input from the user
    4- Perform the necessary calculations
    5- Display the result to the user
    6- End
    */

    int score;
    cout<<"Please enter a score: ";
    cin>>score;

    if(score>=50){
        cout<<"Your score is "<<score<<"\n";
        cout<<"You passed the exam"<<"\n";
    }else{
        cout<<"Your score is "<<score<<"\n";
        cout<<"You failed the exam"<<"\n";
    }
}