# Pointer Manipulator 🎯

A comprehensive C++ educational program demonstrating **Pointer Basics**, **Direct Memory Mutation**, **Pointer Arithmetic**, and **In-Place Array Reversal** using the Two-Pointer technique.

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

Pointers are one of the most powerful and defining features of C++. A pointer is a variable that stores the **memory address** of another variable rather than storing a direct data value.

This project provides an interactive console toolkit that demonstrates:
1. How variables and pointers reside in RAM.
2. How to read and mutate memory directly via the dereference operator (`*`).
3. How array indexing (`arr[i]`) maps directly to pointer arithmetic (`*(ptr + i)`).
4. How to reverse arrays in-place using two converging memory pointers without allocating secondary arrays.

---

## 🧠 Key Concepts

### 1. Address-of (`&`) vs Dereference (`*`)
- **`&var`:** Retrieves the hexadecimal memory address of variable `var`.
- **`*ptr`:** Accesses or mutates the value stored at the memory location pointed to by `ptr`.

```text
RAM Layout:
[ Variable 'num' = 42 ] <--- (Address: 0x7ffd5e2a3c04)
        ▲
        │ stores address
[ Pointer 'ptr' = 0x7ffd5e2a3c04 ]
```

### 2. Pointer Arithmetic (`ptr + i`)
In C++, advancing a pointer by `1` increments the underlying memory address by `sizeof(T)` bytes:
- For `int` (4 bytes), `ptr + 1` jumps **4 bytes** ahead in RAM.
- Therefore, `arr[i]` is functionally identical to `*(arr + i)`.

### 3. Two-Pointer In-Place Reversal
Two pointers (`startPtr` and `endPtr`) converge towards the center, swapping elements directly in memory without allocating auxiliary buffers:

```text
Step 1: [ 1 ] , 2 , 3 , 4 , [ 5 ]  --> Swap *startPtr and *endPtr
          ▲                   ▲
       startPtr             endPtr

Step 2:   5 , [ 2 ] , 3 , [ 4 ] , 1  --> Swap *startPtr and *endPtr
                ▲           ▲
             startPtr     endPtr

Step 3:   5 , 4 , [ 3 ] , 2 , 1      --> startPtr >= endPtr (Finished)
```

---

## ✨ Features

- **Interactive Menu:** Clean menu-driven architecture powered by `do-while` and `switch-case`.
- **Live Memory Inspector:** Displays variable values, memory addresses, pointer values, and dereferenced values.
- **Pointer Arithmetic Table:** Visualizes array memory layout with sequential 4-byte address progression.
- **In-Place Array Reversal:** Employs the two-pointer algorithmic pattern with $\mathcal{O}(1)$ auxiliary space.
- **Input Validation:** Enforces valid array size boundaries ($1 \le \text{size} \le 10$).

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o pointer_manipulator.exe pointer_manipulator.cpp
pointer_manipulator.exe
```

**Linux / macOS:**
```bash
g++ -o pointer_manipulator pointer_manipulator.cpp
./pointer_manipulator
```

---

## 💻 Usage

1. Run the compiled executable.
2. Select Option `1` for **Pointer Basics (Address & Dereference)**.
3. Select Option `2` for **Array Traversal via Pointer Arithmetic**.
4. Select Option `3` for **In-Place Array Reverse (Two-Pointer)**.
5. Select Option `4` to exit the program.

---

## 📈 Sample Output

### Option 1: Pointer Basics
```text
=== Pointer Basics ===
Please enter an initial integer: 42

[Initial State]
Variable Value (num)     : 42
Variable Address (&num)  : 0x7ffd5e2a3c04
Pointer Holds Address    : 0x7ffd5e2a3c04
Dereferenced Value (*ptr): 42

Please enter a new number to update via pointer: 99

[After Modification via *ptr = 99]
Variable Value (num)     : 99 (Updated directly in RAM!)
Dereferenced Value (*ptr): 99
```

### Option 2: Array Traversal via Pointer Arithmetic
```text
--- Array Traversal via Pointer Arithmetic ---
Please enter array size (1-10): 4
Enter Element [0]: 10
Enter Element [1]: 20
Enter Element [2]: 30
Enter Element [3]: 40

Index   |       Address         |       Value
--------------------------------------------------
[0]     |       0x7ffd5e2a3c10  |       10
[1]     |       0x7ffd5e2a3c14  |       20
[2]     |       0x7ffd5e2a3c18  |       30
[3]     |       0x7ffd5e2a3c1c  |       40
```

### Option 3: In-Place Array Reverse
```text
--- In-Place Array Reverse (Two-Pointer) ---
Please enter array size (1-10): 5
Enter Element [0]: 1
Enter Element [1]: 2
Enter Element [2]: 3
Enter Element [3]: 4
Enter Element [4]: 5

Original Array: [ 1, 2, 3, 4, 5 ]
Swapping elements in-place using startPtr & endPtr...
Reversed Array: [ 5, 4, 3, 2, 1 ]
```

---

## 📊 Algorithm & Implementation

1. **`demonstratePointerBasics`:** Binds `int *ptr = &num;`, logs states, executes `*ptr = newNum;`, and observes direct mutation.
2. **`traverseArrayWithPointer`:** Iterates through `(ptr + i)` and reads `*(ptr + i)`.
3. **`reverseArrayInPlace`:** Runs a `while (startPtr < endPtr)` loop, swapping `*startPtr` and `*endPtr`, incrementing `startPtr++`, and decrementing `endPtr--`.
4. **`printArray`:** Traverses and prints array contents formatted with brackets.

---

## ⚡ Complexity Analysis

- **Time Complexity:**
  - Option 1: $\mathcal{O}(1)$
  - Option 2: $\mathcal{O}(n)$
  - Option 3: $\mathcal{O}(n)$ (exactly $\lfloor n/2 \rfloor$ swaps)
- **Space Complexity:** $\mathcal{O}(1)$ — Zero heap allocation; uses only local stack pointers.

---

## 🎯 Learning Objectives

- Declaring and initializing pointer variables (`T *ptr = &var;`).
- Reading and modifying values through dereferencing (`*ptr`).
- Traversing sequential memory using pointer arithmetic (`ptr + i`).
- Applying the **Two-Pointer technique** for in-place algorithms.

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
