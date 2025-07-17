#include <iostream>
using namespace std;

int main() {
    float temp;
    int type;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Choose input type:\n";
    cout << "1. Celsius\n2. Fahrenheit\n3. Kelvin\n";
    cin >> type;

    if (type == 1) {
        cout << "Fahrenheit: " << (temp * 9/5) + 32 << endl;
        cout << "Kelvin: " << temp + 273.15 << endl;
    }
    else if (type == 2) {
        cout << "Celsius: " << (temp - 32) * 5/9 << endl;
        cout << "Kelvin: " << ((temp - 32) * 5/9) + 273.15 << endl;
    }
    else if (type == 3) {
        cout << "Celsius: " << temp - 273.15 << endl;
        cout << "Fahrenheit: " << ((temp - 273.15) * 9/5) + 32 << endl;
    }
    else {
        cout << "Invalid input type.";
    }

    return 0;
}
