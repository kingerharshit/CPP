#include <iostream>
#include <limits>  // For numeric_limits

using namespace std;

int main() {
    cout << "=== Fundamental Data Types and Their Sizes ===" << endl;
    cout << "char: " << sizeof(char) << " byte(s)" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
    cout << "short: " << sizeof(short) << " byte(s)" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " byte(s)" << endl;
    cout << "float: " << sizeof(float) << " byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "long double: " << sizeof(long double) << " byte(s)" << endl;
    cout << "bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " byte(s)" << endl;

    cout << "\n=== Integer Ranges ===" << endl;
    cout << "Signed int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Unsigned int: 0 to " << numeric_limits<unsigned int>::max() << endl;
    cout << "Signed short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "Unsigned short: 0 to " << numeric_limits<unsigned short>::max() << endl;
    cout << "Signed long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "Unsigned long: 0 to " << numeric_limits<unsigned long>::max() << endl;
    cout << "Signed long long: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    cout << "Unsigned long long: 0 to " << numeric_limits<unsigned long long>::max() << endl;

    cout << "\n=== Type Casting Demonstration ===" << endl;
    int i = 65;
    double d = 3.14159;
    char c = 'A';

    // Implicit casting
    double fromInt = i;   // int to double
    int fromChar = c;     // char to int

    // Explicit casting
    int castedDouble = static_cast<int>(d);   // double to int
    char castedInt = static_cast<char>(i);    // int to char

    cout << "Original int: " << i << ", casted to double: " << fromInt << endl;
    cout << "Original char: '" << c << "', casted to int: " << fromChar << endl;
    cout << "Original double: " << d << ", explicitly casted to int: " << castedDouble << endl;
    cout << "Original int: " << i << ", explicitly casted to char: '" << castedInt << "'" << endl;

    return 0;
}
