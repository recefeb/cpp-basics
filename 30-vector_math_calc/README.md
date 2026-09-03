# Vector Math Calculator 📐

A C++ educational program demonstrating **Operator Overloading** in Object-Oriented Programming, allowing custom classes to interact seamlessly using standard arithmetic (`+`, `-`), comparison (`==`), and I/O stream (`<<`) operators.

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

In C++, **Operator Overloading** empowers user-defined types (classes and structs) to utilize built-in language operators. Instead of calling verbose method names like `v1.add(v2)`, developers can write natural mathematical expressions like `v1 + v2`.

This project implements a 2-dimensional vector class (`Vector2D`), showcasing arithmetic operations, component-wise equality checking, and stream formatting.

---

## 🧠 Key Concepts

### 1. Arithmetic Operator Overloading (`+`, `-`)
Binary operators return a brand new instance of `Vector2D` representing the calculated coordinates without mutating the original operands:

$$\vec{v}_1 + \vec{v}_2 = (x_1 + x_2, y_1 + y_2)$$

```cpp
Vector2D operator+(const Vector2D &other) const {
    return Vector2D(x + other.x, y + other.y);
}
```

### 2. Comparison Operator Overloading (`==`)
Returns a `bool` evaluating whether both $x$ and $y$ coordinates are identical:

```cpp
bool operator==(const Vector2D &other) const {
    return (x == other.x && y == other.y);
}
```

### 3. Stream Insertion Operator (`<<`) via `friend`
Because the left operand of `std::cout << v` is `std::ostream` rather than `Vector2D`, the operator must be overloaded as a non-member (or `friend`) function:

```cpp
friend ostream& operator<<(ostream &os, const Vector2D &v) {
    os << "(" << fixed << setprecision(2) << v.x << ", " << v.y << ")";
    return os;
}
```

---

## ✨ Features

- **Natural Syntax:** Perform vector arithmetic directly using `+` and `-`.
- **Relational Equality:** Compare two vector objects using `==`.
- **Direct Stream Printing:** Print vector objects directly with `std::cout << v`.
- **Modern Constructor:** Uses member initializer list (`: x(_x), y(_y)`) with default values.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o vector_math_calc.exe vector_math_calc.cpp
vector_math_calc.exe
```

**Linux / macOS:**
```bash
g++ -o vector_math_calc vector_math_calc.cpp
./vector_math_calc
```

---

## 💻 Usage

1. Run the compiled executable.
2. Enter the $X$ and $Y$ coordinates for the first vector ($V_1$).
3. Enter the $X$ and $Y$ coordinates for the second vector ($V_2$).
4. Observe the formatted output showing $V_1 + V_2$, $V_1 - V_2$, and equality evaluation.

---

## 📈 Sample Output

```text
=== VECTOR MATH CALCULATOR ===
Please enter the x value of the first vector: 3.5
Please enter the y value of the first vector: 2.0
Please enter the x value of the second vector: 1.5
Please enter the y value of the second vector: 4.0

First Vector  : (3.50, 2.00)
Second Vector : (1.50, 4.00)
------------------------------------
Sum (v1 + v2) : (5.00, 6.00)
Diff (v1 - v2): (2.00, -2.00)

Equality Check:
Result: The first vector and second vector are NOT equal.
```

---

## 📊 Algorithm & Implementation

1. **`Vector2D::operator+`:** Creates and returns a new `Vector2D(x + other.x, y + other.y)`.
2. **`Vector2D::operator-`:** Creates and returns a new `Vector2D(x - other.x, y - other.y)`.
3. **`Vector2D::operator==`:** Compares `(x == other.x && y == other.y)` and returns boolean result.
4. **`operator<<`:** Intercepts output stream and formats coordinates as `(X.XX, Y.YY)`.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$ for all vector operations (constant time floating-point arithmetic).
- **Space Complexity:** $\mathcal{O}(1)$ auxiliary space.

---

## 🎯 Learning Objectives

- Mastering C++ **Operator Overloading** syntax and rules.
- Understanding why `operator<<` requires a `friend` / non-member signature.
- Writing `const` member functions to guarantee immutability.
- Utilizing **Member Initializer Lists** in class constructors.

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
