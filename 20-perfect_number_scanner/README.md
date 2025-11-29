# PerfectNumberScanner

A simple C++ program that scans all numbers from **1** up to the user-provided limit and prints every **perfect number** found in that range.  
A perfect number is an integer that is equal to the sum of its positive divisors excluding itself.

---

## 🧩 Purpose

This program:

- Iterates through all integers from `1` to the given upper limit.
- Calculates the sum of each number’s proper divisors.
- Determines whether the number is a **perfect number**.
- Prints all perfect numbers found within the range.
- Prints a message if the selected range cannot contain any perfect numbers (i.e., when input is below 6).

---

## 🚀 How to Run

### **Using a C++ Compiler (g++ recommended)**

1. Save the program as `PerfectNumberScanner.cpp`
2. Open a terminal in the same directory.
3. Compile the program:

```bash
g++ PerfectNumberScanner.cpp -o PerfectNumberScanner
Run the compiled executable:

bash
Copy code
./PerfectNumberScanner
Using an IDE (Code::Blocks, CLion, Visual Studio, etc.)
Create a new C++ project.

Add the source file to the project.

Build the project using the IDE’s build button.

Run the program through the IDE’s run/debug function.
