# Palindrome Checker 🪞

A C++ educational program that determines whether a user-entered word or sentence is a **Palindrome** (reads the same forward and backward), demonstrating **`std::string` manipulation**, **case-insensitive matching**, and the **Two-Pointer technique**.

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

A **Palindrome** is a sequence of characters that reads identically in both directions (e.g., *"radar"*, *"level"*, *"racecar"*).

This project implements a space-efficient palindrome detector using converging left and right index pointers along with `<cctype>` character normalization (`tolower`).

---

## 🧠 Key Concepts

### 1. Two-Pointer Convergence
Instead of creating extra string buffers to compare, two index pointers converge inward from opposite ends:

```text
String: "R a d a r"
         ▲       ▲
     left=0    right=4  --> tolower('R') == tolower('r') (Match)
           ▲   ▲
       left=1 right=3  --> tolower('a') == tolower('a') (Match)
             ▲
          left=right   --> Finished! (Palindrome confirmed)
```

### 2. Case Insensitivity with `tolower()`
By wrapping characters in `tolower()`, case variations like `'R'` and `'r'` are evaluated as equivalent without permanently altering the original input string.

---

## ✨ Features

- **Case-Insensitive Evaluation:** Correctly matches mixed-case palindromes (e.g., *"Kayak"*, *"Racecar"*).
- **Two-Pointer Efficiency:** Performs at most $\lfloor n/2 \rfloor$ comparisons with zero auxiliary heap allocations during validation.
- **Reversed String Inspection:** Displays both the original text and its reversed counterpart side-by-side.
- **Whitespace Support:** Uses `std::getline` to accept full multi-word phrases.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o palindrome_chk.exe palindrome_chk.cpp
palindrome_chk.exe
```

**Linux / macOS:**
```bash
g++ -o palindrome_chk palindrome_chk.cpp
./palindrome_chk
```

---

## 💻 Usage

1. Run the compiled executable.
2. Enter any word, phrase, or text when prompted.
3. Observe the original text, the reversed text, and the final palindrome determination.

---

## 📈 Sample Output

### Example 1: Palindrome
```text
=== PALINDROME CHECKER ===
Enter a word or text: Radar

Original Text : Radar
Reversed Text : radaR

[RESULT] "Radar" is a PALINDROME!
```

### Example 2: Non-Palindrome
```text
=== PALINDROME CHECKER ===
Enter a word or text: Hello World

Original Text : Hello World
Reversed Text : dlroW olleH

[RESULT] "Hello World" is NOT a palindrome.
```

---

## 📊 Algorithm & Implementation

1. **`isPalindrome(const string &str)`:**
   - Initializes `leftFinger = 0` and `rightFinger = str.length() - 1`.
   - While `leftFinger < rightFinger`:
     - Compares `tolower(str[leftFinger])` with `tolower(str[rightFinger])`.
     - Returns `false` immediately on mismatch.
     - Increments `leftFinger++` and decrements `rightFinger--`.
   - Returns `true` if loop completes without mismatch.

2. **`getReversed(const string &str)`:**
   - Iterates backwards from `str.length() - 1` to `0`, concatenating characters into a new string.

---

## ⚡ Complexity Analysis

- **Time Complexity:**
  - `isPalindrome`: $\mathcal{O}(n)$ (at most $n/2$ iterations)
  - `getReversed`: $\mathcal{O}(n)$
- **Space Complexity:**
  - `isPalindrome`: $\mathcal{O}(1)$ auxiliary space
  - `getReversed`: $\mathcal{O}(n)$ space for the returned string

---

## 🎯 Learning Objectives

- Working with `std::string` length and index access.
- Character handling functions from the `<cctype>` header (`tolower`).
- Implementing the converging **Two-Pointer technique**.
- Reversing strings using reverse iteration.

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
