#include <iostream>
using namespace std;

int main() {
    // Implicit Conversion
    int intVal = 10;
    double implicitDouble = intVal; // int to double (implicit)
    cout << "Implicit Conversion (int to double): " << implicitDouble << endl;

    // Explicit Conversion
    double doubleVal = 9.8;
    int explicitInt = static_cast<int>(doubleVal); // double to int (explicit)
    cout << "Explicit Conversion (double to int): " << explicitInt << endl;

    return 0;
}

