#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        int number;
        string unit;

        // Input whole number and unit
        cout << "Enter a whole number: ";
        cin >> number;
        cout << "Enter a unit of measurement (TB, GB, MB, KB, B): ";
        cin >> unit;

        // Convert unit to lowercase for easier comparison
        for (char& c : unit) {
            c = tolower(c);
        }

        // Calculate equivalent bits based on unit
        int bits = 0;
        if (unit == "tb") {
            bits = number * pow(1024, 4);
        } else if (unit == "gb") {
            bits = number * pow(1024, 3);
        } else if (unit == "mb") {
            bits = number * pow(1024, 2);
        } else if (unit == "kb") {
            bits = number * 1024;
        } else if (unit == "b") {
            bits = number;
        } else {
            cout << "Invalid unit of measurement. Please try again." << endl;
            continue;  // Go to the next iteration of the loop
        }

        // Output the equivalent number of bits
        cout << "Equivalent number of bits: " << bits << endl;

        // Check if the user wants to continue
        char choice;
        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

        if (tolower(choice) != 'y') {
            break;  // Exit the loop if the user doesn't want to continue
        }
    }

    return 0;
}
