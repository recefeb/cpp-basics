# Array Stats Calculator 📊

A modular C++ console application that performs comprehensive statistical analysis on a user-defined numeric array, demonstrating **array manipulation** and **passing arrays to functions**.

---

## 📋 Table of Contents
- [Overview](#-overview)
- [Key Concepts](#-key-concepts)
- [Features](#-features)
- [Compilation and Execution](#-compilation-and-execution)
- [Usage](#-usage)
- [Sample Output](#-sample-output)
- [Algorithm & Implementation](#-algorithm--implementation)
- [Complexity Analysis](#-complexity-analysis)
- [Learning Objectives](#-learning-objectives)
- [License](#-license)

---

## 🔍 Overview

In C++, fixed-size arrays decay to pointers when passed to functions, which means size information is lost unless explicitly passed as a separate argument.  
Furthermore, using the `const` qualifier ensures that functions designed only to read and inspect array data cannot inadvertently mutate the original elements.

This project showcases how to build clean, single-responsibility functions for array processing, formatting, and statistical evaluation.

---

## 🧠 Key Concepts

### 1. Passing Arrays to Functions (`const int arr[], int size`)
When an array is passed to a function:
- Only the **address of the first element** is transmitted (Pointer Decay).
- `const` is specified when the function should **only read** array data (read-only protection).
- The array **`size`** must be supplied as a companion parameter so the function knows how many elements to iterate over.

```cpp
// Function signature with read-only array and explicit size:
void printArray(const int arr[], int size);
```

### 2. Output Parameters with References (`&`)
Functions like `findMinMax` and `countSignStats` return multiple analysis outcomes simultaneously using reference parameters rather than relying on global variables.

---

## ✨ Features

- **Input Validation:** Restricts input array size strictly to a safe bounds range ($1 \le \text{size} \le 20$).
- **Reversed Array Inspection:** Traverses and prints the array in reverse order without modifying the original memory.
- **Statistical Computations:** Calculates total sum, floating-point average (with 2 decimal places), and identifies the minimum and maximum values with their respective indices.
- **Sign Frequency Distribution:** Tracks the exact counts of positive, negative, and zero elements.
- **Clean Formatting:** Clean array bracket notation `[ 1, 2, 3 ]` with no trailing commas.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o array_stats_calc.exe array_stats_calc.cpp
array_stats_calc.exe
```

**Linux / macOS:**
```bash
g++ -o array_stats_calc array_stats_calc.cpp
./array_stats_calc
```

---

## 💻 Usage

1. Run the compiled executable.
2. Enter the number of elements you want to analyze (between `1` and `20`).
3. Enter each integer element one by one.
4. View the complete generated statistical analysis report.

---

## 📈 Sample Output

```text
=== ARRAY STATS CALCULATOR ===
How many numbers do you want to enter (1-20)?: 5
Enter Element [1]: 12
Enter Element [2]: -4
Enter Element [3]: 45
Enter Element [4]: 0
Enter Element [5]: 18

==== ANALYSIS RESULTS ====
Original Array  : [ 12, -4, 45, 0, 18 ]
Reversed Array  : [ 18, 0, 45, -4, 12 ]
--------------------------
Sum of Elements : 71
Average         : 14.20
Maximum Element : 45 (at index 2)
Minimum Element : -4 (at index 1)
--------------------------
Positive Count  : 3
Negative Count  : 1
Zero Count      : 1
==========================
Have a good day, goodbye!
```

---

## 📊 Algorithm & Implementation

1. **`printArray` & `printArrayReversed`:** Iterate forward/backward, inserting commas conditionally (`i < size - 1` / `i > 0`).
2. **`calculateSum`:** Accumulates values in a linear accumulator `sum`.
3. **`calculateAverage`:** Reuses `calculateSum()` and casts the numerator to `double` before division.
4. **`findMinMax`:** Initializes with index `0`, iterates from index `1` to `size - 1`, updating min/max values and indices.
5. **`countSignStats`:** Iterates through elements, updating `posCount`, `negCount`, and `zeroCount` counters.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(n)$ — All individual functions perform a single pass over $n$ elements.
- **Space Complexity:** $\mathcal{O}(1)$ — In-place processing; uses only stack-allocated static memory.

---

## 🎯 Learning Objectives

- Passing arrays and size parameters to modular C++ functions.
- Enforcing read-only data safety using the `const` keyword.
- Reusing existing helper functions (`calculateSum` inside `calculateAverage`).
- Separating calculation logic from display logic (Single Responsibility Principle).

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
