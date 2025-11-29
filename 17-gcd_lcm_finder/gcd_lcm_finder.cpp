#include <iostream>
using namespace std;

/*
ALGORITHM: GCD and LCM Calculator
----------------------------------
1. START
2. DECLARE variables: num1, num2, GCD, LCM, smallNum
3. INPUT num1 and num2 from user
4. FIND the smaller number between num1 and num2
   - IF num1 < num2 THEN
       smallNum = num1
   - ELSE
       smallNum = num2
5. CALCULATE GCD (Greatest Common Divisor):
   - FOR i = smallNum DOWN TO 1
       * IF (num1 % i == 0) AND (num2 % i == 0) THEN
           - GCD = i
           - BREAK loop (first common divisor found is the greatest)
6. CALCULATE LCM (Least Common Multiple):
   - LCM = (num1 * num2) / GCD
7. OUTPUT GCD
8. OUTPUT LCM
9. END
*/

int main()
{
    short int num1, num2, GCD = 1, LCM, i, smallNum;

    cout << "Please enter a two numbers: ";
    cin >> num1 >> num2;

    if (num1 < num2)
    {
        smallNum = num1;
    }
    else
    {
        smallNum = num2;
    }

    for (i = smallNum; i > 1; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            GCD = i;
            break;
        }
    }

    LCM = (num1 * num2) / GCD;

    cout << "Greatest common divisior (GCD) is " << GCD << "\n";
    cout << "Least common multiple (LCM) is " << LCM << "\n";
    return 0;
}