#include <iostream>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: Vector Math Calculator (vector_math_calc)
 *
 * OBJECTIVE:
 * Demonstrate Operator Overloading in C++ using a 2D Vector class (Vector2D).
 * Illustrates how to overload binary arithmetic operators (+, -), relational comparison operators (==),
 * and stream insertion operators (<<) via friend functions for intuitive mathematical object manipulation.
 *
 * ALGORITHM:
 * 1. Define 'class Vector2D':
 *    - Private coordinates: x (double), y (double).
 *    - Constructor with default arguments (0, 0) and member initializer list.
 *    - Overloaded operators:
 *      * operator+(const Vector2D &other): Returns new Vector2D(x + other.x, y + other.y).
 *      * operator-(const Vector2D &other): Returns new Vector2D(x - other.x, y - other.y).
 *      * operator==(const Vector2D &other): Returns true if both x and y coordinates match.
 *      * friend ostream& operator<<(ostream &os, const Vector2D &v): Formats output as (x, y).
 * 2. In main():
 *    - Prompt user for (x, y) coordinates of two vectors (v1 and v2).
 *    - Perform vector addition and subtraction using intuitive + and - syntax.
 *    - Print input vectors and calculated results using standard cout << v syntax.
 *    - Check and report equality using v1 == v2 syntax.
 *
 * TIME COMPLEXITY:  O(1) - Constant-time arithmetic and comparison operations.
 * SPACE COMPLEXITY: O(1) - Constant stack space for Vector2D instances.
 */

// ==========================================
// CLASS DEFINITION
// ==========================================
class Vector2D {
private:
    double x;
    double y;

public:
    // Parameterized constructor with default parameters and initializer list
    Vector2D(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // Overloaded addition operator (+)
    Vector2D operator+(const Vector2D &other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    // Overloaded subtraction operator (-)
    Vector2D operator-(const Vector2D &other) const {
        return Vector2D(x - other.x, y - other.y);
    }

    // Overloaded equality operator (==)
    bool operator==(const Vector2D &other) const {
        return (x == other.x && y == other.y);
    }

    // Overloaded stream insertion operator (<<) for cout formatting
    friend ostream& operator<<(ostream &os, const Vector2D &v) {
        os << "(" << fixed << setprecision(2) << v.x << ", " << v.y << ")";
        return os;
    }
};

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;

    cout << "\n=== VECTOR MATH CALCULATOR ===\n";
    cout << "Please enter the x value of the first vector: ";
    cin >> x1;
    cout << "Please enter the y value of the first vector: ";
    cin >> y1;

    cout << "Please enter the x value of the second vector: ";
    cin >> x2;
    cout << "Please enter the y value of the second vector: ";
    cin >> y2;

    // Instantiate vectors
    Vector2D v1(x1, y1);
    Vector2D v2(x2, y2);

    // Compute operations using overloaded operators
    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;

    // Output formatted results
    cout << "\nFirst Vector  : " << v1 << endl;
    cout << "Second Vector : " << v2 << endl;
    cout << "------------------------------------\n";
    cout << "Sum (v1 + v2) : " << sum << endl;
    cout << "Diff (v1 - v2): " << diff << endl;

    cout << "\nEquality Check:\n";
    if (v1 == v2) {
        cout << "Result: The first vector and second vector are EQUAL!\n";
    } else {
        cout << "Result: The first vector and second vector are NOT equal.\n";
    }

    return 0;
}