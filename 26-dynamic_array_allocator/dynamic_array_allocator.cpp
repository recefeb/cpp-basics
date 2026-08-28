#include <iostream>

using namespace std;

/*
 * PROGRAM NAME: Dynamic Array Allocator (dynamic_array_allocator)
 *
 * OBJECTIVE:
 * Demonstrate dynamic memory management in C++ using the Heap, the new and delete[] operators,
 * pointer references (int* &), automatic capacity geometric doubling (vector-like resize),
 * and safe memory cleanup to prevent memory leaks and dangling pointers.
 *
 * ALGORITHM:
 * 1. Declare function prototypes:
 *    - allocateArray(int capacity): Allocates heap memory for requested capacity.
 *    - freeArray(int *&arr, int &size, int &capacity): Deallocates memory, sets pointer to nullptr.
 *    - displayArray(const int *arr, int &size, int &capacity): Inspects heap addresses and values.
 *    - resizeArray(int *oldArr, int &capacity, int size): Doubles capacity, migrates elements, deletes old memory.
 *    - addElement(int *&arr, int &size, int &capacity, int value): Adds element, triggers resize if full.
 * 2. In main():
 *    - Initialize arr = nullptr, size = 0, capacity = 0.
 *    - Interactive do-while menu with 5 options:
 *      Option 1: Add element (auto-allocates or doubles capacity).
 *      Option 2: Display memory layout and heap addresses.
 *      Option 3: Explicitly deallocate heap memory.
 *      Option 4: Allocate a custom-sized array (safely freeing existing memory first).
 *      Option 5: Perform clean-up and exit program.
 *
 * TIME COMPLEXITY:
 * - Append (Amortized): O(1) - Geometric doubling yields constant amortized time.
 * - Resize: O(n) linear migration of existing elements.
 * - Display / Free: O(n) / O(1)
 * SPACE COMPLEXITY: O(n) on the Heap (dynamic growth).
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

int *allocateArray(int capacity);
void freeArray(int *&arr, int &size, int &capacity);
void displayArray(const int *arr, int &size, int &capacity);
int *resizeArray(int *oldArr, int &capacity, int size);
void addElement(int *&arr, int &size, int &capacity, int value);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    int *arr = nullptr;
    int size = 0;
    int capacity = 0;
    int choice = 0;

    do {
        cout << "\n========================================\n";
        cout << "       DYNAMIC ARRAY ALLOCATOR          ";
        cout << "\n========================================\n";
        cout << "1. Add Element (Auto-Resize on full)\n";
        cout << "2. Display Array & Heap Addresses\n";
        cout << "3. Free Memory (delete[])\n";
        cout << "4. Allocate New Custom Array\n";
        cout << "5. Exit";
        cout << "\n----------------------------------------\n";
        cout << "Please enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Please enter a value to add: ";
                cin >> value;
                addElement(arr, size, capacity, value);
                break;
            }

            case 2: {
                displayArray(arr, size, capacity);
                break;
            }

            case 3: {
                cout << "[Clean-Up] Deallocating array with delete[]...\n";
                cout << "[Clean-Up] Pointer reset to nullptr. Memory is safe!\n";
                freeArray(arr, size, capacity);
                break;
            }

            case 4: {
                int newCap;
                cout << "\nPlease enter desired capacity for the new array: ";
                cin >> newCap;

                if (newCap <= 0) {
                    cout << "[Error] Capacity must be greater than 0!\n";
                    break;
                }

                freeArray(arr, size, capacity);
                arr = allocateArray(newCap);
                capacity = newCap;
                size = 0;
                cout << "[Success] Allocated new array with capacity: " << capacity << endl;
                break;
            }

            case 5: {
                freeArray(arr, size, capacity);
                cout << "\nExiting program. Have a nice day, goodbye!\n";
                break;
            }

            default: {
                cout << "\nInvalid choice! Please enter a number between 1 and 5.\n";
                break;
            }
        }
    } while (choice != 5);

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Allocates dynamic array on the Heap
int *allocateArray(int capacity) {
    if (capacity <= 0) {
        return nullptr;
    }
    return new int[capacity];
}

// Deallocates heap memory and resets pointer to nullptr (prevents dangling pointers)
void freeArray(int *&arr, int &size, int &capacity) {
    if (arr != nullptr) {
        delete[] arr;
        arr = nullptr;
    }
    size = 0;
    capacity = 0;
}

// Displays array elements along with their heap memory addresses
void displayArray(const int *arr, int &size, int &capacity) {
    if (arr == nullptr || size == 0) {
        cout << "\n[!] Array is empty or no memory is allocated.\n";
        return;
    }

    cout << "\n--- Dynamic Array Memory View ---\n";
    cout << "Capacity: " << capacity << " | Size: " << size << endl;
    cout << "Elements in Heap:\n";
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] Address: " << &arr[i] << " | Value: " << arr[i] << endl;
    }
}

// Resizes the array by doubling capacity, migrating elements, and freeing old memory
int *resizeArray(int *oldArr, int &capacity, int size) {
    int newCapacity;

    if (capacity <= 0) {
        newCapacity = 2;
    } else {
        newCapacity = capacity * 2;
    }

    cout << "\n[ALERT] Capacity reached! Resizing Heap memory from " 
         << capacity << " -> " << newCapacity << "...\n";

    int *newArr = new int[newCapacity];

    if (oldArr != nullptr) {
        for (int i = 0; i < size; i++) {
            newArr[i] = oldArr[i];
        }
        delete[] oldArr; // Free old memory buffer to prevent memory leak
    }

    capacity = newCapacity;
    return newArr;
}

// Appends an element to the dynamic array, triggering auto-resize if capacity is reached
void addElement(int *&arr, int &size, int &capacity, int value) {
    if (arr == nullptr || size == capacity) {
        arr = resizeArray(arr, capacity, size);
    }
    arr[size] = value;
    size++;

    cout << "-> Added " << value << ". [Size: " << size << " / Cap: " << capacity << "]\n";
}