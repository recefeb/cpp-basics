#include <iostream>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: Number Swapper (number_swapper)
 *
 * OBJECTIVE:
 * Demonstrate the fundamental difference between Call by Value and Call by Reference in C++,
 * and showcase how to return multiple computed values from a single function using reference parameters (&).
 *
 * ALGORITHM:
 * 1. Declare function prototypes:
 *    - swapByValue(int num1, int num2): Copies values; does NOT affect original variables in caller.
 *    - swapByReference(int &num1, int &num2): Passes aliases; directly swaps values in caller memory.
 *    - calculateAll(int num1, int num2, int &sum, int &diff, int &prod, double &quot, int &minValue, int &maxValue):
 *      Computes sum, difference, product, quotient, minimum, and maximum using reference output parameters.
 * 2. Start an interactive do-while menu loop (Options 1-3).
 * 3. In Option 1 (Swap Demonstration):
 *    - Read numbers A and B from user.
 *    - Display original values.
 *    - Call swapByValue(A, B) -> Show that main variables remain UNCHANGED.
 *    - Call swapByReference(A, B) -> Show that main variables are SUCCESSFULLY SWAPPED.
 * 4. In Option 2 (Multi-Value Math Calculator):
 *    - Read numbers A and B from user.
 *    - Call calculateAll(...) with references.
 *    - Display all 6 computed results (sum, diff, prod, formatted quot, min, max).
 * 5. In Option 3 (Exit):
 *    - Display goodbye message and terminate loop.
 *
 * TIME COMPLEXITY:  O(1) - Constant time for all arithmetic operations and swaps.
 * SPACE COMPLEXITY: O(1) - Minimal memory footprint with zero heap allocations.
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

// Call by Value: Modifies local copies only
void swapByValue(int num1, int num2);

// Call by Reference: Directly modifies caller variables via aliases (&)
void swapByReference(int &num1, int &num2);

// Output Parameters: Computes multiple arithmetic results in a single call
void calculateAll(int num1, int num2, int &sum, int &diff, int &prod, double &quot, int &minValue, int &maxValue);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    int choice = 0;

    do {
        cout << "\n====================================\n";
        cout << "          NUMBER SWAPPER            \n";
        cout << "====================================\n";
        cout << "1. Swap Demonstration (Value vs Reference)\n";
        cout << "2. Multi Value Math Calculator\n";
        cout << "3. Exit\n";
        cout << "------------------------------------\n";
        cout << "Please enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int A, B;
                cout << "\n----- Swap Demonstration -----\n";
                cout << "Please enter the first number (A): ";
                cin >> A;
                cout << "Please enter the second number (B): ";
                cin >> B;

                cout << "\nOriginal values: A = " << A << ", B = " << B << endl;

                // Step 1: Call by Value
                cout << "\n[1] Testing swapByValue(A, B)...\n";
                swapByValue(A, B);
                cout << "After swapByValue in main: A = " << A << ", B = " << B << " (NO CHANGE!)\n";

                // Step 2: Call by Reference
                cout << "\n[2] Testing swapByReference(A, B)...\n";
                swapByReference(A, B);
                cout << "After swapByReference in main: A = " << A << ", B = " << B << " (SUCCESSFULLY SWAPPED!)\n";
                break;
            }

            case 2: {
                int A, B, sum = 0, diff = 0, prod = 0, minValue = 0, maxValue = 0;
                double quot = 0.0;

                cout << "\n----- Multi Value Math Calculator -----\n";
                cout << "Please enter the first number (A): ";
                cin >> A;
                cout << "Please enter the second number (B): ";
                cin >> B;

                // Calculate all values through reference parameters
                calculateAll(A, B, sum, diff, prod, quot, minValue, maxValue);

                cout << fixed << setprecision(2);
                cout << "\n--- Calculation Results ---\n";
                cout << "Sum (A + B)        : " << sum << endl;
                cout << "Difference (A - B) : " << diff << endl;
                cout << "Product (A * B)    : " << prod << endl;
                cout << "Quotient (A / B)   : " << quot << endl;

                if (A == B) {
                    cout << "Note: Both numbers are equal (" << A << ").\n";
                } else {
                    cout << "Min Value          : " << minValue << endl;
                    cout << "Max Value          : " << maxValue << endl;
                }
                break;
            }

            case 3: {
                cout << "Exiting program. Goodbye!\n";
                break;
            }

            default: {
                cout << "Invalid choice! Please enter a number between 1 and 3.\n";
                break;
            }
        }
    } while (choice != 3);

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Performs local swap using copies; caller variables remain unaffected
void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Inside swapByValue: A = " << num1 << ", B = " << num2 << " (Local swap only)\n";
}

// Performs direct memory swap; caller variables are permanently swapped
void swapByReference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Inside swapByReference: A = " << num1 << ", B = " << num2 << " (Direct memory access)\n";
}

// Fills multiple output parameters simultaneously using reference variables (&)
void calculateAll(int num1, int num2, int &sum, int &diff, int &prod, double &quot, int &minValue, int &maxValue) {
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Guard against division by zero
    if (num2 != 0) {
        quot = (double)num1 / num2;
    } else {
        quot = 0.0;
    }

    // Determine min and max
    if (num1 < num2) {
        minValue = num1;
        maxValue = num2;
    } else {
        minValue = num2;
        maxValue = num1;
    }
}