# 🔢 FactorialCalculator

A simple C++ program that calculates the factorial of a given positive integer.

## 🧩 Purpose

This program computes the factorial of a number entered by the user. The factorial of a number n (denoted as n!) is the product of all positive integers less than or equal to n.  
It also handles invalid inputs such as negative numbers and includes the special case where 0! = 1.

## 🚀 How to Run

### Using an IDE (e.g., Visual Studio, Code::Blocks)

1. Create a new C++ file named `FactorialCalculator.cpp`.
2. Paste the program code into it.
3. Compile and run the program.
4. Enter a positive number when prompted.
5. The program will calculate and display the factorial.

### Using Command Line (Windows)

1. Open a terminal/PowerShell window.
2. Navigate to the folder containing `FactorialCalculator.cpp`.
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ FactorialCalculator.cpp -o FactorialCalculator.exe
   ```
4. Run the executable:
   ```bash
   FactorialCalculator.exe
   ```

### Using Command Line (Linux/macOS)

1. Open a terminal window.
2. Navigate to the folder containing `FactorialCalculator.cpp`.
3. Compile the program:
   ```bash
   g++ FactorialCalculator.cpp -o FactorialCalculator
   ```
4. Run the executable:
   ```bash
   ./FactorialCalculator
   ```

## 📊 Example Output

```
Please enter a positive number: 5
Factorial of the number: 120
```

```
Please enter a positive number: 0
Factorial of the number: 1
```

```
Please enter a positive number: -3
Please enter a valid value
```

## ⚠️ Important Notes

- The program only accepts non-negative integers
- For negative numbers, an error message is displayed
- 0! = 1 by mathematical definition
- For large numbers, `int` data type may overflow (limit around 12! = 479,001,600)
