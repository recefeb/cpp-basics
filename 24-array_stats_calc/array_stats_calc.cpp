#include <iostream>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: Array Stats Calculator (array_stats_calc)
 *
 * OBJECTIVE:
 * Demonstrate fixed-size array manipulation and passing arrays to modular functions in C++.
 * Perform comprehensive statistical analysis on user-provided numbers including sum, average,
 * minimum/maximum with their indices, and positive/negative/zero sign counts.
 *
 * ALGORITHM:
 * 1. Declare function prototypes accepting const int arr[] and int size:
 *    - printArray: Prints formatted array elements [ e1, e2, ... ].
 *    - printArrayReversed: Prints array elements in reverse order.
 *    - calculateSum: Computes the arithmetic sum of all elements.
 *    - calculateAverage: Reuses calculateSum to compute the mean value.
 *    - findMinMax: Determines min/max values and their zero-based indices using reference parameters (&).
 *    - countSignStats: Counts positive, negative, and zero elements using reference parameters (&).
 * 2. In main():
 *    - Declare a fixed-size array (MAX_SIZE = 20).
 *    - Validate user input for array size (1 <= size <= 20) via a do-while loop.
 *    - Read elements from standard input.
 *    - Call each function sequentially to compute and display formatted statistical results.
 *
 * TIME COMPLEXITY:  O(n) - Single linear passes for printing, summing, finding min/max, and counting signs.
 * SPACE COMPLEXITY: O(1) - Constant auxiliary space (in-place processing on static array).
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

void printArray(const int arr[], int size);
void printArrayReversed(const int arr[], int size);
int calculateSum(const int arr[], int size);
double calculateAverage(const int arr[], int size);
void findMinMax(const int arr[], int size, int &minValue, int &minIndex, int &maxValue, int &maxIndex);
void countSignStats(const int arr[], int size, int &posCount, int &negCount, int &zeroCount);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    const int MAX_SIZE = 20;
    int arr[MAX_SIZE];
    int size;

    int minValue = 0, minIndex = 0;
    int maxValue = 0, maxIndex = 0;
    int posCount = 0, negCount = 0, zeroCount = 0;

    cout << "\n=== ARRAY STATS CALCULATOR ===\n";

    // Validate array size input
    do {
        cout << "How many numbers do you want to enter (1-20)?: ";
        cin >> size;
    } while (size <= 0 || size > 20);

    // Read array elements
    for (int i = 0; i < size; i++) {
        cout << "Enter Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    // Display analysis results
    cout << "\n==== ANALYSIS RESULTS ====\n";
    printArray(arr, size);
    printArrayReversed(arr, size);
    cout << "--------------------------\n";

    cout << fixed << setprecision(2);
    cout << "Sum of Elements : " << calculateSum(arr, size) << endl;
    cout << "Average         : " << calculateAverage(arr, size) << endl;

    findMinMax(arr, size, minValue, minIndex, maxValue, maxIndex);
    cout << "Maximum Element : " << maxValue << " (at index " << maxIndex << ")" << endl;
    cout << "Minimum Element : " << minValue << " (at index " << minIndex << ")" << endl;
    cout << "--------------------------\n";

    countSignStats(arr, size, posCount, negCount, zeroCount);
    cout << "Positive Count  : " << posCount << endl;
    cout << "Negative Count  : " << negCount << endl;
    cout << "Zero Count      : " << zeroCount << endl;
    cout << "==========================\n";
    cout << "Have a good day, goodbye!\n";

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Prints elements in original order without trailing comma
void printArray(const int arr[], int size) {
    cout << "Original Array  : [ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << " ]\n";
}

// Prints elements in reverse order without trailing comma
void printArrayReversed(const int arr[], int size) {
    cout << "Reversed Array  : [ ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) {
            cout << ", ";
        }
    }
    cout << " ]\n";
}

// Computes the total sum of all elements in the array
int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Calculates the arithmetic mean by reusing calculateSum()
double calculateAverage(const int arr[], int size) {
    if (size == 0) return 0.0;
    return (double)calculateSum(arr, size) / size;
}

// Finds the minimum and maximum values along with their respective indices
void findMinMax(const int arr[], int size, int &minValue, int &minIndex, int &maxValue, int &maxIndex) {
    minValue = arr[0];
    minIndex = 0;
    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }

        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}

// Counts the frequency of positive, negative, and zero values in the array
void countSignStats(const int arr[], int size, int &posCount, int &negCount, int &zeroCount) {
    posCount = 0;
    negCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }
}