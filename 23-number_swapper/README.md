# Number Swapper & Multi-Value Calculator 🔄

A C++ educational program demonstrating the fundamental difference between **Call by Value** and **Call by Reference (`&`)**, as well as the technique of returning **multiple computed values** from a single function.

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

In C++, functions typically return only a single value using the `return` statement. Furthermore, passing arguments by default creates local copies that do not affect variables in the caller function.

This project provides an interactive console demonstration for two core techniques:
1. **Value vs Reference Swapping:** Comparing how memory and variable values behave under `swapByValue` vs `swapByReference`.
2. **Multiple Return Values:** Using reference output parameters (`&`) to calculate and return six different mathematical results simultaneously in a single `void` function.

---

## 🧠 Key Concepts

### Call by Value vs Call by Reference

| Feature | Call by Value (`int a`) | Call by Reference (`int &a`) |
| :--- | :--- | :--- |
| **Mechanism** | Copies the variable's value into a new memory location. | Passes an alias (direct reference) to the original memory address. |
| **Caller Impact** | Changes inside the function **do NOT** affect caller variables. | Changes inside the function **permanently modify** caller variables. |
| **Memory Overhead** | Creates temporary copies (inefficient for large objects). | Zero copy overhead (highly efficient). |
| **Common Use** | Read-only operations and simple primitive types. | Mutating inputs and returning multiple values (output parameters). |

```text
Call by Value:
main()  [ A = 10 ]  ---(copy value)--->  func() [ a = 10 -> 20 ] (A stays 10 in main)

Call by Reference:
main()  [ A = 10 ] <===================> func() [ &a points directly to A ] (A becomes 20 in main)
```

---

## ✨ Features

- **Side-by-Side Swap Comparison:** Directly observes how `swapByValue` fails to swap caller variables while `swapByReference` succeeds.
- **Comprehensive Math Suite:** Calculates Sum, Difference, Product, Quotient (with 0 division guard), Minimum, and Maximum in a single function call.
- **Interactive Menu:** Clean console menu powered by a `do-while` loop and `switch-case`.
- **Formatted Decimal Output:** Results formatted with `<iomanip>` (`fixed`, `setprecision(2)`).

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o number_swapper.exe number_swapper.cpp
number_swapper.exe
```

**Linux / macOS:**
```bash
g++ -o number_swapper number_swapper.cpp
./number_swapper
```

---

## 💻 Usage

1. Run the compiled executable.
2. Select option `1` to run the **Swap Demonstration**.
3. Select option `2` to run the **Multi-Value Math Calculator**.
4. Select option `3` to exit the program.

---

## 📈 Sample Output

### Option 1: Swap Demonstration
```text
====================================
          NUMBER SWAPPER            
====================================
1. Swap Demonstration (Value vs Reference)
2. Multi Value Math Calculator
3. Exit
------------------------------------
Please enter your choice (1-3): 1

----- Swap Demonstration -----
Please enter the first number (A): 10
Please enter the second number (B): 20

Original values: A = 10, B = 20

[1] Testing swapByValue(A, B)...
Inside swapByValue: A = 20, B = 10 (Local swap only)
After swapByValue in main: A = 10, B = 20 (NO CHANGE!)

[2] Testing swapByReference(A, B)...
Inside swapByReference: A = 20, B = 10 (Direct memory access)
After swapByReference in main: A = 20, B = 10 (SUCCESSFULLY SWAPPED!)
```

### Option 2: Multi-Value Math Calculator
```text
====================================
          NUMBER SWAPPER            
====================================
1. Swap Demonstration (Value vs Reference)
2. Multi Value Math Calculator
3. Exit
------------------------------------
Please enter your choice (1-3): 2

----- Multi Value Math Calculator -----
Please enter the first number (A): 15
Please enter the second number (B): 5

--- Calculation Results ---
Sum (A + B)        : 20
Difference (A - B) : 10
Product (A * B)    : 75
Quotient (A / B)   : 3.00
Min Value          : 5
Max Value          : 15
```

---

## 📊 Algorithm & Implementation

### 1. `swapByValue(int num1, int num2)`
- Uses a temporary variable `temp` to swap local copies.
- Demonstrates that changes do not persist outside the function scope.

### 2. `swapByReference(int &num1, int &num2)`
- Takes parameters by reference using `&`.
- Mutates original memory locations directly.

### 3. `calculateAll(...)`
- Accepts input values `num1` and `num2` by value.
- Populates `&sum`, `&diff`, `&prod`, `&quot`, `&minValue`, and `&maxValue` directly via reference parameters.
- Validates division by zero before calculating quotient.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$ — All arithmetic operations and swaps execute in constant time.
- **Space Complexity:** $\mathcal{O}(1)$ — Zero heap allocation; uses only stack-allocated primitive references.

---

## 🎯 Learning Objectives

- Mastering C++ **Reference syntax (`&`)**.
- Understanding the memory mechanics of **Call by Value** vs **Call by Reference**.
- Overcoming the single return value constraint with **Output Parameters**.
- Writing clean, modular, and safe arithmetic functions (division by zero handling).

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
