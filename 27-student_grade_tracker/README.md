# Student Grade Tracker 🎓

A modular C++ educational program demonstrating **User-Defined Data Structures (`struct`)**, **Array of Structs**, and statistical analysis over structured records.

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

In C++, `struct` allows developers to group multiple heterogeneous data types (such as `int`, `std::string`, and `double`) into a single cohesive data model.  
This serves as the foundational bridge before transitioning into full Object-Oriented Programming (Classes).

This project tracks classroom student records, computes overall class average performance, and identifies the highest-achieving student using clean modular functions.

---

## 🧠 Key Concepts

### 1. Defining a `struct`
A `struct` packages related variables together into a single custom type:

```cpp
struct Student {
    int studentId;
    string studentName;
    double studentGrade;
};
```

### 2. Array of Structs & Member Access (`.`)
Instantiating an array of structures allows batch record processing. Members are accessed using the **dot operator (`.`)**:

```cpp
Student studentList[MAX_STUDENTS];
studentList[i].studentName = "Alice";
studentList[i].studentGrade = 95.0;
```

---

## ✨ Features

- **Input Validation:** Enforces student count within a safe bound ($1 \le \text{count} \le 10$).
- **Full Name Input Handling:** Uses `std::getline` combined with `cin.ignore()` to safely handle multi-word names with spaces.
- **Classroom Summary Report:** Displays complete formatted student roster.
- **Statistical Analytics:** Computes exact arithmetic class average (formatted to 2 decimal places).
- **Top Performer Detection:** Evaluates and highlights the student with the highest exam score.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o student_grade_tracker.exe student_grade_tracker.cpp
student_grade_tracker.exe
```

**Linux / macOS:**
```bash
g++ -o student_grade_tracker student_grade_tracker.cpp
./student_grade_tracker
```

---

## 💻 Usage

1. Run the compiled executable.
2. Enter the number of students you want to record (between `1` and `10`).
3. For each student, enter their ID, Full Name, and Exam Grade.
4. View the generated **Class Report**, **Class Average**, and **Top Student**.

---

## 📈 Sample Output

```text
=== STUDENT GRADE TRACKER ===
How many students do you want to enter (1-10)?: 3

--- Student 1 ---
Enter ID: 101
Enter Name: Alice Smith
Enter Grade: 95.5

--- Student 2 ---
Enter ID: 102
Enter Name: Bob Jones
Enter Grade: 82.0

--- Student 3 ---
Enter ID: 103
Enter Name: Charlie Brown
Enter Grade: 88.5

=== CLASS REPORT ===
1. Student ID: 101 | Name: Alice Smith | Grade: 95.5
2. Student ID: 102 | Name: Bob Jones | Grade: 82
3. Student ID: 103 | Name: Charlie Brown | Grade: 88.5

Class Average: 88.67
The student with the highest grade: Alice Smith (95.5)
```

---

## 📊 Algorithm & Implementation

1. **`displayStudents`:** Iterates through `list[i]`, printing each struct member using dot notation.
2. **`calculateAverage`:** Sums all `studentGrade` fields as `double` and divides by `count`.
3. **`findTopStudent`:** Initializes max tracker with `list[0]`, iterates through `1` to `count - 1`, updating the name and grade whenever a higher score is found.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(n)$ — Single linear pass for input, printing, averaging, and finding top score.
- **Space Complexity:** $\mathcal{O}(n)$ — Stack memory allocated for the fixed array of structs.

---

## 🎯 Learning Objectives

- Declaring and utilizing custom `struct` types in C++.
- Managing Arrays of Structs (`Student list[]`).
- Passing struct arrays to functions (`const Student list[]`).
- Handling mixed data input streams (`cin >>` followed by `std::getline`).

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
