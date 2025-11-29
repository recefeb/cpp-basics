# 🔍 SmallestLargestFinder

A simple C++ program that finds the smallest and largest numbers from a series of user-entered integers.

## 🧩 Purpose

This program continuously prompts the user to enter numbers and keeps track of the smallest and largest values entered. The loop continues until the user enters 0 to exit.  
It uses `INT_MAX` and `INT_MIN` to initialize the comparison variables, ensuring accurate results regardless of input range.

## 🚀 How to Run

### Using an IDE (e.g., Visual Studio, Code::Blocks)

1. Create a new C++ file named `smallest_largest_finder.cpp`.
2. Paste the program code into it.
3. Compile and run the program.
4. Enter numbers when prompted (enter 0 to finish).
5. The program will display the smallest and largest numbers entered.

### Using Command Line (Windows)

1. Open a terminal/PowerShell window.
2. Navigate to the folder containing `smallest_largest_finder.cpp`.
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ smallest_largest_finder.cpp -o smallest_largest_finder.exe
   ```
4. Run the executable:
   ```bash
   smallest_largest_finder.exe
   ```

### Using Command Line (Linux/macOS)

1. Open a terminal window.
2. Navigate to the folder containing `smallest_largest_finder.cpp`.
3. Compile the program:
   ```bash
   g++ smallest_largest_finder.cpp -o smallest_largest_finder
   ```
4. Run the executable:
   ```bash
   ./smallest_largest_finder
   ```

## 📊 Example Output

```
Press 0 to exit the loop
1th number: 45
2th number: -12
3th number: 78
4th number: 3
5th number: -5
6th number: 0

the smallest number: -12

the largest number: 78
```

## ⚠️ Important Notes

- Enter 0 to stop entering numbers and display results
- The program accepts both positive and negative integers
- At least one non-zero number should be entered for meaningful results
- Uses `INT_MAX` and `INT_MIN` for proper initialization of min/max values
