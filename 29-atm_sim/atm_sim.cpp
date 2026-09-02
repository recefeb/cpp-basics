#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: ATM Simulator (atm_sim)
 *
 * OBJECTIVE:
 * Demonstrate Object-Oriented Programming (OOP) fundamentals in C++, focusing on Encapsulation,
 * data hiding with private access specifiers, parameterized constructors, member methods with validation,
 * and state management through a console-based ATM interface.
 *
 * ALGORITHM:
 * 1. Define 'class BankAccount':
 *    - Private attributes: accountNumber (long int), accountHolder (string), accountBalance (double).
 *    - Parameterized Constructor: Validates initial balance (>= 0).
 *    - Public member methods:
 *      * deposit(double amount): Validates positive amount and updates balance.
 *      * withdraw(double amount): Validates positive amount and checks for sufficient funds.
 *      * getAccountBalance() const: Returns current balance.
 *      * displayAccountInfo() const: Prints account number, holder name, and balance.
 * 2. In main():
 *    - Prompt user for initial account setup (Account Number, Full Name, Initial Balance).
 *    - Instantiate BankAccount object.
 *    - Provide an interactive 5-option do-while loop (Check Balance, Deposit, Withdraw, Details, Exit).
 *
 * TIME COMPLEXITY:  O(1) - Constant time for all banking transactions.
 * SPACE COMPLEXITY: O(1) - Minimal memory footprint for object state.
 */

// ==========================================
// CLASS DEFINITION
// ==========================================
class BankAccount {
private:
    long int accountNumber;
    string accountHolder;
    double accountBalance;

public:
    // Parameterized Constructor
    BankAccount(long int _accountNumber, string _accountHolder, double _accountBalance) {
        accountNumber = _accountNumber;
        accountHolder = _accountHolder;
        if (_accountBalance >= 0) {
            accountBalance = _accountBalance;
        } else {
            accountBalance = 0.0;
        }
    }

    // Deposits money into the account with validation
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            cout << fixed << setprecision(2);
            cout << "\n[Success] Deposited $" << amount << ". New Balance: $" << accountBalance << endl;
        } else {
            cout << "\n[ERROR]: Deposit amount must be positive!\n";
        }
    }

    // Withdraws money from the account with validation
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "\n[ERROR]: Withdrawal amount must be positive!\n";
        } else if (amount > accountBalance) {
            cout << fixed << setprecision(2);
            cout << "\n[ERROR]: Insufficient balance! Current Balance: $" << accountBalance << endl;
        } else {
            accountBalance -= amount;
            cout << fixed << setprecision(2);
            cout << "\n[Success] Withdrew $" << amount << ". New Balance: $" << accountBalance << endl;
        }
    }

    // Returns the current account balance
    double getAccountBalance() const {
        return accountBalance;
    }

    // Displays full account details
    void displayAccountInfo() const {
        cout << fixed << setprecision(2);
        cout << "\n--- ACCOUNT DETAILS ---\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }
};

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    long int accNum;
    string accHol;
    double accBal;

    cout << "\n=== WELCOME TO THE BANK OF C++ ===\n";
    cout << "Enter Account Number: ";
    cin >> accNum;
    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, accHol);

    cout << "Enter Initial Balance: $";
    cin >> accBal;

    // Instantiate BankAccount object
    BankAccount account(accNum, accHol, accBal);

    int choice = 0;
    do {
        cout << "\n====================================\n";
        cout << "           ATM SIMULATOR            \n";
        cout << "====================================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Account Details\n";
        cout << "5. Exit\n";
        cout << "------------------------------------\n";
        cout << "Enter Your Choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << fixed << setprecision(2);
                cout << "\nYour Current Balance: $" << account.getAccountBalance() << endl;
                break;
            }

            case 2: {
                double amount = 0.0;
                cout << "\nEnter amount to deposit: $";
                cin >> amount;
                account.deposit(amount);
                break;
            }

            case 3: {
                double amount = 0.0;
                cout << "\nEnter amount to withdraw: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            }

            case 4: {
                account.displayAccountInfo();
                break;
            }

            case 5: {
                cout << "\nThank you for using our ATM service.\n";
                cout << "Have a nice day. Goodbye!\n";
                break;
            }

            default: {
                cout << "\n[ERROR]: Invalid choice! Please select an option between 1 and 5.\n";
                break;
            }
        }
    } while (choice != 5);

    return 0;
}