#include <iostream>

using namespace std;

/*
 * PROGRAM NAME: Pointer Manipulator (pointer_manipulator)
 *
 * OBJECTIVE:
 * Demonstrate fundamental pointer concepts in C++, including memory address retrieval (&),
 * value dereferencing (*), direct memory mutation, array traversal using pointer arithmetic (*(ptr + i)),
 * and in-place array reversal using the two-pointer technique without auxiliary arrays.
 *
 * ALGORITHM:
 * 1. Declare function prototypes:
 *    - demonstratePointerBasics(): Illustrates address-of (&), dereference (*), and direct RAM mutation.
 *    - traverseArrayWithPointer(const int *ptr, int size): Iterates through array memory addresses with 4-byte steps.
 *    - reverseArrayInPlace(int *startPtr, int *endPtr): Swaps elements in-place using two converging pointers.
 *    - printArray(const int *ptr, int size): Formats and displays array contents using pointer arithmetic.
 * 2. In main():
 *    - Provide an interactive do-while menu loop with 4 options:
 *      Option 1: Execute pointer basics demo.
 *      Option 2: Read user array and display index-address-value table.
 *      Option 3: Read user array, display before/after in-place reversal using two pointers.
 *      Option 4: Exit program gracefully.
 *
 * TIME COMPLEXITY:
 * - Option 1: O(1)
 * - Option 2: O(n) linear traversal
 * - Option 3: O(n) in-place two-pointer swap (n/2 iterations)
 * SPACE COMPLEXITY: O(1) - Pure in-place operations with zero heap allocation.
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

void demonstratePointerBasics();
void traverseArrayWithPointer(const int *ptr, int size);
void reverseArrayInPlace(int *startPtr, int *endPtr);
void printArray(const int *ptr, int size);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    int choice = 0;

    do {
        cout << "\n====================================\n";
        cout << "        POINTER MANIPULATOR         ";
        cout << "\n====================================\n";
        cout << "1. Pointer Basics (Address & Dereference)\n";
        cout << "2. Array Traversal via Pointer Arithmetic\n";
        cout << "3. In-Place Array Reverse (Two-Pointer)\n";
        cout << "4. Exit";
        cout << "\n------------------------------------\n";
        cout << "Please enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << endl;
                demonstratePointerBasics();
                cout << endl;
                break;
            }

            case 2: {
                const int MAX_SIZE = 10;
                int arr[MAX_SIZE];
                int size;

                cout << "\n--- Array Traversal via Pointer Arithmetic ---\n";
                do {
                    cout << "Please enter array size (1-10): ";
                    cin >> size;
                } while (size <= 0 || size > 10);

                for (int i = 0; i < size; i++) {
                    cout << "Enter Element [" << i << "]: ";
                    cin >> arr[i];
                }

                traverseArrayWithPointer(arr, size);
                break;
            }

            case 3: {
                const int MAX_SIZE = 10;
                int arr[MAX_SIZE];
                int size;

                cout << "\n--- In-Place Array Reverse (Two-Pointer) ---\n";
                do {
                    cout << "Please enter array size (1-10): ";
                    cin >> size;
                } while (size <= 0 || size > 10);

                for (int i = 0; i < size; i++) {
                    cout << "Enter Element [" << i << "]: ";
                    cin >> arr[i];
                }

                cout << "Original Array: ";
                printArray(arr, size);

                cout << "Swapping elements in-place using startPtr & endPtr...\n";
                reverseArrayInPlace(arr, arr + size - 1);

                cout << "Reversed Array: ";
                printArray(arr, size);
                break;
            }

            case 4: {
                cout << "\nExiting program. Have a nice day, goodbye!\n";
                break;
            }

            default: {
                cout << "\nInvalid choice! Please enter a number between 1 and 4.\n";
                break;
            }
        }
    } while (choice != 4);

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Demonstrates memory addresses (&), pointer storage, and dereferencing (*)
void demonstratePointerBasics() {
    int num;
    cout << "=== Pointer Basics ===\n";
    cout << "Please enter an initial integer: ";
    cin >> num;

    int *ptr = &num;

    cout << "\n[Initial State]\n";
    cout << "Variable Value (num)     : " << num << endl;
    cout << "Variable Address (&num)  : " << &num << endl;
    cout << "Pointer Holds Address    : " << ptr << endl;
    cout << "Dereferenced Value (*ptr): " << *ptr << endl;

    int newNum;
    cout << "\nPlease enter a new number to update via pointer: ";
    cin >> newNum;
    *ptr = newNum;

    cout << "\n[After Modification via *ptr = " << newNum << "]\n";
    cout << "Variable Value (num)     : " << num << " (Updated directly in RAM!)\n";
    cout << "Dereferenced Value (*ptr): " << *ptr << endl;
}

// Traverses and prints array elements along with memory addresses using pointer arithmetic
void traverseArrayWithPointer(const int *ptr, int size) {
    cout << "\nIndex\t|\tAddress\t\t|\tValue\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << "[" << i << "]\t|\t" << (ptr + i) << "\t|\t" << *(ptr + i) << endl;
    }
}

// Reverses an array in-place using converging two-pointer technique
void reverseArrayInPlace(int *startPtr, int *endPtr) {
    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }
}

// Formats and prints an array using pointer notation
void printArray(const int *ptr, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i);
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << " ]\n";
}
