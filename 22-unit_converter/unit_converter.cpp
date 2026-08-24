#include <iostream>
#include <iomanip>

using namespace std;

/*
 * PROGRAM NAME: Unit Converter (unit_converter)
 *
 * OBJECTIVE:
 * Provide a menu-driven console tool that converts values between various units
 * across Temperature, Length, and Weight categories using modular C++ functions.
 *
 * ALGORITHM:
 * 1. Declare function prototypes for each conversion type.
 * 2. Start an interactive do-while loop to display the main menu.
 * 3. Prompt the user to enter their choice (1 to 7).
 * 4. Use a switch-case statement:
 *    - Case 1: Prompt for Celsius, call celsiusToFahrenheit(), print result in Fahrenheit.
 *    - Case 2: Prompt for Fahrenheit, call fahrenheitToCelsius(), print result in Celsius.
 *    - Case 3: Prompt for Meters, call metersToKilometers(), print result in Kilometers.
 *    - Case 4: Prompt for Meters, call metersToFeet(), print result in Feet.
 *    - Case 5: Prompt for Kilograms, call kilogramsToGrams(), print result in Grams.
 *    - Case 6: Prompt for Kilograms, call kilogramsToPounds(), print result in Pounds.
 *    - Case 7: Display exit message and terminate loop.
 *    - Default: Display invalid input warning.
 * 5. Format all output results to 2 decimal places using fixed & setprecision(2).
 * 6. Repeat until the user chooses option 7 (Exit).
 *
 * FORMULAS:
 * - Fahrenheit = (Celsius * 9/5) + 32
 * - Celsius    = (Fahrenheit - 32) * 5/9
 * - Kilometers = Meters / 1000
 * - Feet       = Meters * 3.28084
 * - Grams      = Kilograms * 1000
 * - Pounds     = Kilograms * 2.20462
 *
 * TIME COMPLEXITY:  O(1) - Constant time for all conversions
 * SPACE COMPLEXITY: O(1) - Minimal memory usage with local variables
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================

// Temperature Conversion Functions
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

// Length Conversion Functions
double metersToKilometers(double meters);
double metersToFeet(double meters);

// Weight Conversion Functions
double kilogramsToGrams(double kilograms);
double kilogramsToPounds(double kilograms);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    int userChoice = 0;

    // Interactive Menu Loop
    do {
        cout << "\n==================================\n";
        cout << "          UNIT CONVERTER          ";
        cout << "\n==================================\n";

        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Meters to Kilometers" << endl;
        cout << "4. Meters to Feet" << endl;
        cout << "5. Kilograms to Grams" << endl;
        cout << "6. Kilograms to Pounds" << endl;
        cout << "7. Exit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> userChoice;

        // Process user choice
        switch (userChoice) {
            case 1: {
                double tCelsius, result = 0.0;
                cout << "Please enter the Celsius value: ";
                cin >> tCelsius;
                result = celsiusToFahrenheit(tCelsius);
                cout << fixed << setprecision(2);
                cout << tCelsius << " Celsius = " << result << " Fahrenheit\n";
                break;
            }

            case 2: {
                double tFahrenheit, result = 0.0;
                cout << "Please enter the Fahrenheit value: ";
                cin >> tFahrenheit;
                result = fahrenheitToCelsius(tFahrenheit);
                cout << fixed << setprecision(2);
                cout << tFahrenheit << " Fahrenheit = " << result << " Celsius\n";
                break;
            }

            case 3: {
                double lMeters, result = 0.0;
                cout << "Please enter the Meters value: ";
                cin >> lMeters;
                result = metersToKilometers(lMeters);
                cout << fixed << setprecision(2);
                cout << lMeters << " Meters = " << result << " Kilometers\n";
                break;
            }

            case 4: {
                double lMeters, result = 0.0;
                cout << "Please enter the Meters value: ";
                cin >> lMeters;
                result = metersToFeet(lMeters);
                cout << fixed << setprecision(2);
                cout << lMeters << " Meters = " << result << " Feet\n";
                break;
            }

            case 5: {
                double wKilograms, result = 0.0;
                cout << "Please enter the Kilograms value: ";
                cin >> wKilograms;
                result = kilogramsToGrams(wKilograms);
                cout << fixed << setprecision(2);
                cout << wKilograms << " Kilograms = " << result << " Grams\n";
                break;
            }

            case 6: {
                double wKilograms, result = 0.0;
                cout << "Please enter the Kilograms value: ";
                cin >> wKilograms;
                result = kilogramsToPounds(wKilograms);
                cout << fixed << setprecision(2);
                cout << wKilograms << " Kilograms = " << result << " Pounds\n";
                break;
            }

            case 7:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 7.\n";
                break;    
        }

    } while (userChoice != 7);

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Converts Celsius temperature to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Converts Fahrenheit temperature to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Converts distance in Meters to Kilometers
double metersToKilometers(double meters) {
    return meters / 1000.0;
}

// Converts distance in Meters to Feet
double metersToFeet(double meters) {
    return meters * 3.28084;
}

// Converts mass in Kilograms to Grams
double kilogramsToGrams(double kilograms) {
    return kilograms * 1000.0;
}

// Converts mass in Kilograms to Pounds
double kilogramsToPounds(double kilograms) {
    return kilograms * 2.20462;
}