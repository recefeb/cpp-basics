# Dynamic Array Allocator 💾

A C++ educational program demonstrating **Dynamic Memory Management** on the **Heap**, the `new` and `delete[]` operators, **automatic capacity doubling (geometric resizing)**, and safe pointer lifecycle practices.

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

Unlike stack-allocated fixed-size arrays (`int arr[10]`), real-world software frequently handles datasets whose sizes are unknown at compile time.  
Dynamic arrays solve this by allocating memory at runtime on the **Heap** using pointers.

This project implements a foundational dynamic array container (simulating the core mechanics of `std::vector`), demonstrating:
1. Allocating runtime-sized buffers on the Heap (`new int[capacity]`).
2. Doubling capacity automatically when storage fills up.
3. Preventing **Memory Leaks** by releasing obsolete buffers (`delete[]`).
4. Preventing **Dangling Pointers** by resetting deallocated pointers to `nullptr`.

---

## 🧠 Key Concepts

### 1. Stack vs Heap Memory

| Attribute | Stack Memory | Heap Memory (Dynamic) |
| :--- | :--- | :--- |
| **Allocation** | Automatic at compile time (`int x;`, `int arr[5];`). | Explicit at runtime (`new int[size]`). |
| **Deallocation** | Automatic when exiting function scope. | Manual via `delete` / `delete[]`. |
| **Size Flexibility** | Fixed, cannot grow or shrink. | Dynamic, resizable via reallocation. |
| **Lifetime** | Tied to local block scope. | Persists until explicitly freed. |

```text
Dynamic Resize Mechanism:
Old Array (Cap: 2, Full):   [ 10 ][ 20 ]  (Address: 0x100)
                                 │
                                 ▼ (Migrate elements & delete[] 0x100)
New Array (Cap: 4):         [ 10 ][ 20 ][ 30 ][  _ ]  (Address: 0x500)
```

### 2. Geometric Doubling & Amortized Time
Doubling capacity ($2 \to 4 \to 8 \to 16$) ensures that resizing occurs infrequently.  
While resizing a full array takes $\mathcal{O}(n)$ time, the **amortized time complexity** per element insertion remains $\mathcal{O}(1)$.

---

## ✨ Features

- **Automatic Geometric Resizing:** Seamlessly doubles capacity when `size == capacity`.
- **Live Heap Address Inspector:** Visualizes physical heap memory addresses alongside stored values.
- **Safe Deallocation:** Frees heap blocks and sets pointers to `nullptr` to avoid dangling pointers.
- **Custom Capacity Allocation:** Allows explicit manual allocation while automatically clearing previous allocations.
- **Interactive Console Menu:** 5-option interactive menu loop.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o dynamic_array_allocator.exe dynamic_array_allocator.cpp
dynamic_array_allocator.exe
```

**Linux / macOS:**
```bash
g++ -o dynamic_array_allocator dynamic_array_allocator.cpp
./dynamic_array_allocator
```

---

## 💻 Usage

1. Run the compiled executable.
2. Select Option `1` to add elements (observing auto-resizing when full).
3. Select Option `2` to inspect current capacity, size, and Heap memory addresses.
4. Select Option `3` to manually deallocate memory.
5. Select Option `4` to allocate a new custom-sized array.
6. Select Option `5` to perform safe cleanup and exit.

---

## 📈 Sample Output

```text
========================================
       DYNAMIC ARRAY ALLOCATOR          
========================================
1. Add Element (Auto-Resize on full)
2. Display Array & Heap Addresses
3. Free Memory (delete[])
4. Allocate New Custom Array
5. Exit
----------------------------------------
Please enter your choice (1-5): 1
Please enter a value to add: 10
[ALERT] Capacity reached! Resizing Heap memory from 0 -> 2...
-> Added 10. [Size: 1 / Cap: 2]

Please enter your choice (1-5): 1
Please enter a value to add: 20
-> Added 20. [Size: 2 / Cap: 2]

Please enter your choice (1-5): 1
Please enter a value to add: 30
[ALERT] Capacity reached! Resizing Heap memory from 2 -> 4...
-> Added 30. [Size: 3 / Cap: 4]

Please enter your choice (1-5): 2

--- Dynamic Array Memory View ---
Capacity: 4 | Size: 3
Elements in Heap:
[0] Address: 0x1f4a20 | Value: 10
[1] Address: 0x1f4a24 | Value: 20
[2] Address: 0x1f4a28 | Value: 30

Please enter your choice (1-5): 3
[Clean-Up] Deallocating array with delete[]...
[Clean-Up] Pointer reset to nullptr. Memory is safe!
```

---

## 📊 Algorithm & Implementation

1. **`allocateArray(capacity)`:** Allocates `new int[capacity]` and returns the address.
2. **`freeArray(int* &arr, ...)`:** Deallocates buffer with `delete[] arr` and resets `arr = nullptr`.
3. **`resizeArray(oldArr, ...)`:** Allocates a buffer of size `2 * capacity`, copies existing elements, frees `oldArr`, updates capacity reference, and returns the new buffer.
4. **`addElement(int* &arr, ...)`:** Verifies capacity, invokes `resizeArray` if needed, and stores value at `arr[size++]`.
5. **`displayArray(arr, ...)`:** Guards against `nullptr` / zero size, then displays formatted elements with addresses.

---

## ⚡ Complexity Analysis

- **Time Complexity:**
  - `addElement` (Amortized): $\mathcal{O}(1)$
  - `resizeArray`: $\mathcal{O}(n)$
  - `displayArray`: $\mathcal{O}(n)$
  - `freeArray`: $\mathcal{O}(1)$
- **Space Complexity:** $\mathcal{O}(n)$ allocated on the Heap.

---

## 🎯 Learning Objectives

- Mastering Heap allocation with `new` and deallocation with `delete[]`.
- Preventing common C++ memory hazards: **Memory Leaks** and **Dangling Pointers**.
- Passing pointer references (`int* &`) to allow memory relocation inside functions.
- Understanding how standard containers like `std::vector` manage dynamic capacity internally.

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
