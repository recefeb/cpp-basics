# Pascal's Triangle Generator

This program generates and displays Pascal's Triangle up to the number of rows specified by the user.

## 📋 Table of Contents
- [What is Pascal's Triangle?](#what-is-pascals-triangle)
- [Features](#features)
- [Compilation and Execution](#compilation-and-execution)
- [Usage](#usage)
- [Algorithm Explanation](#algorithm-explanation)
- [Sample Output](#sample-output)

## 🔺 What is Pascal's Triangle?

Pascal's Triangle is a mathematical structure where each element equals the sum of the two elements above it. It is widely used in combinatorics, probability calculations, and algebra.

**Mathematical Properties:**
- Each row starts and ends with 1
- The k-th element in the n-th row = C(n,k) = n! / (k! × (n-k)!)
- Provides coefficients for binomial expansions: (a+b)ⁿ

## ✨ Features

- User-friendly interface
- Input validation (negative/zero check)
- Optimized combination calculation algorithm
- Well-formatted triangle output
- Memory efficient (O(1) space complexity)

## 🛠️ Compilation and Execution

### Requirements
- C++ compiler (g++, clang++, MSVC, etc.)

### Compilation Commands

**Linux/Mac:**
```bash
g++ -o pascal_triangle pascal_triangle.cpp
./pascal_triangle
```

**Windows:**
```bash
g++ -o pascal_triangle.exe pascal_triangle.cpp
pascal_triangle.exe
```

## 💻 Usage

When the program runs, it asks how many rows of Pascal's Triangle you want to see:

```
Please enter a row number: 5
```

Enter a valid positive integer and press Enter.

## 📊 Algorithm Explanation

### Core Logic

1. **Input and Validation**
   - Request number of rows from user
   - Validate for positive number

2. **Row Processing (Outer Loop)**
   - For each row (from 0 to n)

3. **Adding Spaces**
   - Add spaces at the beginning to create triangle shape
   - Number of spaces: (row - i - 1)

4. **Combination Calculation (Inner Loop)**
   - First element of each row = 1
   - Next elements: `C(i,j) = C(i,j-1) × (i-j+1) / j`
   - This formula avoids factorial calculation

### Optimization

Instead of calculating each combination value from scratch, the program calculates using **the previous value**. This way:
- Factorial calculation becomes unnecessary
- Time complexity is reduced
- Risk of overflow with large numbers decreases

### Complexity Analysis

- **Time Complexity:** O(n²) - Two nested loops
- **Space Complexity:** O(1) - Only constant number of variables used

## 📈 Sample Output

### Input: 6 rows
```
Please enter a row number: 6
          1   
        1   1   
      1   2   1   
    1   3   3   1   
  1   4   6   4   1   
1   5   10   10   5   1   
```

### Input: 8 rows
```
Please enter a row number: 8
              1   
            1   1   
          1   2   1   
        1   3   3   1   
      1   4   6   4   1   
    1   5   10   10   5   1   
  1   6   15   20   15   6   1   
1   7   21   35   35   21   7   1   
```

## 🔍 Mathematical Background

The numbers in the n-th row of Pascal's Triangle are the coefficients of the binomial expansion (a+b)ⁿ.

**Example:** Row 4 → (a+b)³ = 1a³ + 3a²b + 3ab² + 1b³

**Combination Formula:**
```
C(n,k) = n! / (k! × (n-k)!)
```

## 🐛 Error Cases

The program displays an error message in the following cases:

- If a negative number is entered
- If zero is entered

**Error Message:**
```
Please enter a valid value.
```

## 📝 License

This project is prepared for educational purposes and can be used freely.

---

**Developer Note:** The code is optimized with mathematical accuracy and performance in mind.
