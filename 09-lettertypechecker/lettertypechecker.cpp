#include <iostream>
using namespace std;

int main()
{
    /*
    Program Name: lettertypechecker
    Objective:
    Determine whether the entered character is a vowel or a consonant.
    Validate that the input is a letter before processing.

    Algorithm:
    1. Start the program.
    2. Declare a variable 'letter' of type char.
    3. Prompt the user to enter a character.
    4. Check if the entered character is a valid letter:
       - If not (not between 'A'-'Z' or 'a'-'z'), display an error message and terminate the program.
    5. Use a switch statement to check if the letter is a vowel:
       - Vowels: a, e, i, o, u (both uppercase and lowercase).
       - If it matches, display "vowel".
       - Otherwise, display "consonant".
    6. End the program.
    */

    char letter;
    cout << "Please enter a letter: ";
    cin >> letter;

    if( !( (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z') ) )
    {
        cout << letter << " is not a letter\n";
        return 0;
    }

    switch(letter)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << letter << " is a vowel\n";
            break;

        default:
            cout << letter << " is a consonant\n";
    }

    return 0;
}
