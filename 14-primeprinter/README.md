# PrimePrinter

A simple C++ program that prints all prime numbers up to a user-specified positive number.  
The program validates that the input is greater than 1 and efficiently checks for prime numbers using the square root optimization.

## 🧩 Purpose

This program helps users quickly find and display all prime numbers up to a given number.  
It uses an optimized method by checking divisibility only up to the square root of each number, improving performance for larger inputs.  

## 🚀 How to Run

### Using an IDE (e.g., Visual Studio, Code::Blocks)
1. Open the project folder in your IDE.
2. Add the `primeprinter.cpp` file to a new project.
3. Build/compile the project.
4. Run the program.
5. When prompted, enter a positive number greater than 1.
6. The program will print all prime numbers up to the number you entered.

### Using Command Line (Windows)
1. Open a terminal/PowerShell window.
2. Navigate to the folder containing `primeprinter.cpp`.
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ primeprinter.cpp -o primeprinter.exe
