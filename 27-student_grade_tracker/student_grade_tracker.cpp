#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: Student Grade Tracker (student_grade_tracker)
 *
 * OBJECTIVE:
 * Demonstrate custom user-defined data structures (struct) in C++.
 * Group multiple heterogeneous data fields (id, name, grade) into a unified Student record,
 * manage an array of structs, compute statistical metrics (class average), and determine the top-performing student.
 *
 * ALGORITHM:
 * 1. Define 'struct Student' containing:
 *    - studentId (int)
 *    - studentName (string)
 *    - studentGrade (double)
 * 2. Declare modular function prototypes:
 *    - displayStudents(const Student list[], int count): Prints formatted tabular records.
 *    - calculateAverage(const Student list[], int count): Computes the arithmetic class mean.
 *    - findTopStudent(const Student list[], int count): Identifies and displays the highest-scoring student.
 * 3. In main():
 *    - Prompt user for total student count (validated between 1 and MAX_STUDENTS = 10).
 *    - Read records using cin and getline (clearing the buffer with cin.ignore()).
 *    - Display formatted class report, average score (fixed to 2 decimals), and top student.
 *
 * TIME COMPLEXITY:  O(n) - Linear scan for data entry, display, average computation, and max search.
 * SPACE COMPLEXITY: O(n) - Fixed stack allocation for student array.
 */

// ==========================================
// DATA STRUCTURE DEFINITION
// ==========================================
struct Student {
    int studentId;
    string studentName;
    double studentGrade;
};

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================
void displayStudents(const Student list[], int count);
double calculateAverage(const Student list[], int count);
void findTopStudent(const Student list[], int count);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    const int MAX_STUDENTS = 10;
    Student studentList[MAX_STUDENTS];
    int count;

    cout << "\n=== STUDENT GRADE TRACKER ===\n";

    // Validate student count input
    do {
        cout << "How many students do you want to enter (1-10)?: ";
        cin >> count;

        if (count < 1 || count > MAX_STUDENTS) {
            cout << "Please enter a value between 1 and 10.\n";
        }
    } while (count <= 0 || count > MAX_STUDENTS);

    // Read student records
    for (int i = 0; i < count; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        cout << "Enter ID: ";
        cin >> studentList[i].studentId;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, studentList[i].studentName);

        cout << "Enter Grade: ";
        cin >> studentList[i].studentGrade;
    }

    // Display Class Report
    cout << "\n=== CLASS REPORT ===\n";
    displayStudents(studentList, count);

    cout << fixed << setprecision(2);
    cout << "\nClass Average: " << calculateAverage(studentList, count) << endl;

    findTopStudent(studentList, count);

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Formats and prints all student records in the list
void displayStudents(const Student list[], int count) {
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". Student ID: " << list[i].studentId
             << " | Name: " << list[i].studentName
             << " | Grade: " << list[i].studentGrade << endl;
    }
}

// Calculates the arithmetic mean of student grades
double calculateAverage(const Student list[], int count) {
    if (count <= 0) {
        return 0.0;
    }

    double sumGrade = 0.0;
    for (int i = 0; i < count; i++) {
        sumGrade += list[i].studentGrade;
    }
    return sumGrade / count;
}

// Identifies and displays the student with the highest grade
void findTopStudent(const Student list[], int count) {
    if (count <= 0) {
        return;
    }

    double topStudentGrade = list[0].studentGrade;
    string topStudentName = list[0].studentName;

    for (int i = 1; i < count; i++) {
        if (list[i].studentGrade > topStudentGrade) {
            topStudentGrade = list[i].studentGrade;
            topStudentName = list[i].studentName;
        }
    }

    cout << "The student with the highest grade: " << topStudentName 
         << " (" << topStudentGrade << ")\n";
}
