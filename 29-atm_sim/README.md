# ATM Simulator 🏧

A modular, Object-Oriented C++ console application that simulates an automated teller machine (ATM), demonstrating **Classes**, **Encapsulation**, **Data Hiding (`private`/`public`)**, and **Parameterized Constructors**.

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

In software development, financial data requires strict protection against direct external tampering.  
Unlike basic structures where fields are publicly accessible, Object-Oriented Programming uses **Encapsulation** to bundle data with methods while restricting direct access through access specifiers.

This project implements a `BankAccount` class where account balance and sensitive details are guarded as `private`, ensuring all deposits and withdrawals pass through validation checks.

---

## 🧠 Key Concepts

### 1. Encapsulation & Data Hiding
- **`private` Members:** `accountNumber`, `accountHolder`, and `accountBalance` cannot be directly modified outside the class (preventing invalid states like `account.balance = -9999;`).
- **`public` Methods:** Operations are mediated via member functions (`deposit`, `withdraw`, `getAccountBalance`, `displayAccountInfo`).

```text
+--------------------------------------------------------+
|                   BankAccount Class                    |
+--------------------------------------------------------+
| [private]                                              |
|   - accountNumber : long int                           |
|   - accountHolder : string                             |
|   - accountBalance: double                             |
+--------------------------------------------------------+
| [public]                                               |
|   + BankAccount(accNum, holder, initialBalance)        |
|   + deposit(amount)                                    |
|   + withdraw(amount)                                   |
|   + getAccountBalance() const                          |
|   + displayAccountInfo() const                         |
+--------------------------------------------------------+
```

### 2. Parameterized Constructor
Initializes object state at creation time while enforcing business constraints (e.g., preventing negative initial deposits).

---

## ✨ Features

- **Encapsulated State:** Safeguards financial balances against unauthorized external changes.
- **Validation Guardrails:**
  - Prevents non-positive deposit or withdrawal amounts.
  - Rejects overdraft attempts when requested withdrawal exceeds available balance.
- **Formatted Currency Output:** Uses `<iomanip>` (`fixed`, `setprecision(2)`) to render currency consistently.
- **Interactive Banking Menu:** 5-option interactive ATM console interface.

---

## 🛠️ Compilation and Execution

### Requirements
- A modern C++ compiler (`g++`, `clang++`, or `MSVC`)

### Compilation Commands

**Windows (Command Prompt / PowerShell):**
```bash
g++ -o atm_sim.exe atm_sim.cpp
atm_sim.exe
```

**Linux / macOS:**
```bash
g++ -o atm_sim atm_sim.cpp
./atm_sim
```

---

## 💻 Usage

1. Run the compiled executable.
2. Initialize your account by entering an Account Number, Account Holder Name, and Initial Balance.
3. Use the menu to check balance, deposit funds, withdraw cash, or inspect account details.
4. Select Option `5` to exit safely.

---

## 📈 Sample Output

```text
=== WELCOME TO THE BANK OF C++ ===
Enter Account Number: 10020030045
Enter Account Holder Name: John Doe
Enter Initial Balance: $500.00

====================================
           ATM SIMULATOR            
====================================
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Account Details
5. Exit
------------------------------------
Enter Your Choice (1-5): 1

Your Current Balance: $500.00

====================================
Enter Your Choice (1-5): 2

Enter amount to deposit: $250.50
[Success] Deposited $250.50. New Balance: $750.50

====================================
Enter Your Choice (1-5): 3

Enter amount to withdraw: $1000.00
[ERROR]: Insufficient balance! Current Balance: $750.50

====================================
Enter Your Choice (1-5): 4

--- ACCOUNT DETAILS ---
Account Number : 10020030045
Account Holder : John Doe
Account Balance: $750.50

====================================
Enter Your Choice (1-5): 5

Thank you for using our ATM service.
Have a nice day. Goodbye!
```

---

## 📊 Algorithm & Implementation

1. **`BankAccount::BankAccount(...)`:** Sets fields; guards negative initial deposit with fallback to `0.0`.
2. **`BankAccount::deposit(amount)`:** Validates `amount > 0`, adds to `accountBalance`, and logs confirmation.
3. **`BankAccount::withdraw(amount)`:** Validates `amount > 0` and `amount <= accountBalance`, subtracts from `accountBalance`, or throws descriptive error.
4. **`BankAccount::getAccountBalance()`:** Read-only `const` accessor returning current balance.
5. **`BankAccount::displayAccountInfo()`:** Formats and prints all account attributes.

---

## ⚡ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$ for all banking transactions (constant time arithmetic operations).
- **Space Complexity:** $\mathcal{O}(1)$ stack memory per instance.

---

## 🎯 Learning Objectives

- Understanding the transition from `struct` to `class`.
- Implementing the OOP principle of **Encapsulation (Data Hiding)**.
- Writing **Constructors** and `const` member functions.
- Enforcing business validation logic inside member methods.

---

## 📝 License

This project is open-source and created for educational purposes as part of the **cpp-basics** repository.
