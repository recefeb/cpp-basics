# Unit Converter 🔄

A modular, menu-driven C++ console application that performs conversions across various measurement units including **Temperature**, **Length**, and **Weight**.

---

## 📋 Table of Contents
- [Overview](#-overview)
- [Features](#-features)
- [Supported Conversions & Formulas](#-supported-conversions--formulas)
- [Compilation and Execution](#-compilation-and-execution)
- [Usage](#-usage)
- [Sample Output](#-sample-output)
- [Algorithm & Implementation](#-algorithm--implementation)
- [Complexity Analysis](#-complexity-analysis)
- [Learning Objectives](#-learning-objectives)
- [License](#-license)

---

## 🔍 Overview

The **Unit Converter** is designed to provide a clean and interactive command-line interface for converting between different metric and imperial units.  
It serves as a practical demonstration of **modular programming in C++**, separating computational logic into dedicated, reusable functions rather than handling all logic inside `main()`.

---

## ✨ Features

- **Interactive Menu:** Intuitive, loop-based menu powered by a `do-while` loop and `switch-case` statements.
- **Modular Design:** Each unit conversion is handled by its own independent function prototype and definition.
- **Precision Formatting:** All results are formatted to **2 decimal places** using `<iomanip>` (`fixed` and `setprecision(2)`).
- **Error Handling:** Validates menu selections and notifies the user of invalid input.
- **Continuous Execution:** Allows multiple conversions in a single session until the user chooses to exit.

---

## 📐 Supported Conversions & Formulas

### 1. Temperature
| Conversion | Formula |
| :--- | :--- |
| **Celsius to Fahrenheit** | $$F = (C \times \frac{9}{5}) + 32$$ |
| **Fahrenheit to Celsius** | $$C = (F - 32) \times \frac{5}{9}$$ |

### 2. Length & Distance
| Conversion | Formula / Multiplier |
| :--- | :--- |
| **Meters to Kilometers** | $$km = \frac{m}{1000}$$ |
| **Meters to Feet** | $$\text{feet} = m \times 3.28084$$ |

### 3. Weight & Mass
| Conversion | Formula / Multiplier |
| :--- | :--- |
| **Kilograms to Grams** | $$g = kg \times 1000$$ |
| **Kilograms to Pounds** | $$\text{lbs} = kg \times 2.20462$$ |

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o unit_converter.exe unit_converter.cpp
unit_converter.exe
```

**Linux / macOS:**
```bash
g++ -o unit_converter unit_converter.cpp
./unit_converter
```

---

## 💻 Usage

1. Run the compiled executable.
2. Select a conversion type by entering a number from `1` to `6`, or choose `7` to exit.
3. Enter the value you want to convert when prompted.
4. View the converted result formatted to two decimal places.
5. The menu will re-appear automatically for further conversions until `7` is entered.

---

## 📈 Sample Output

```text
==================================
          UNIT CONVERTER          
==================================
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Meters to Kilometers
4. Meters to Feet
5. Kilograms to Grams
6. Kilograms to Pounds
7. Exit
----------------------------------
Enter your choice (1-7): 1
Please enter the Celsius value: 25
25.00 Celsius = 77.00 Fahrenheit

==================================
          UNIT CONVERTER          
==================================
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Meters to Kilometers
4. Meters to Feet
5. Kilograms to Grams
6. Kilograms to Pounds
7. Exit
----------------------------------
Enter your choice (1-7): 4
Please enter the Meters value: 10
10.00 Meters = 32.81 Feet

==================================
          UNIT CONVERTER          
==================================
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Meters to Kilometers
4. Meters to Feet
5. Kilograms to Grams
6. Kilograms to Pounds
7. Exit
----------------------------------
Enter your choice (1-7): 7
Exiting program. Goodbye!
```

---

## 📊 Algorithm & Implementation

### Core Flow
1. **Function Prototypes:** Defined before `main()` to inform the compiler about function signatures.
2. **Menu Display Loop:** A `do-while` loop runs continuously until `userChoice == 7`.
3. **Input Handling & Routing:** A `switch-case` structure routes user inputs to their respective conversion functions.
4. **Calculations:** Independent functions perform the arithmetic using floating-point math (`double`).
5. **Formatted Output:** Results are displayed with consistent decimal precision.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$ — Each arithmetic conversion runs in constant time.
- **Space Complexity:** $\mathcal{O}(1)$ — Minimal memory footprint with only local primitive variables.

---

## 🎯 Learning Objectives

- Writing and calling modular C++ functions.
- Understanding **Function Prototypes (Declarations)** vs **Function Definitions**.
- Avoiding integer division pitfalls (e.g., using `9.0 / 5.0` instead of `9 / 5`).
- Structuring interactive console menus using `do-while` and `switch-case`.
- Output formatting with `<iomanip>` (`fixed`, `setprecision`).

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
