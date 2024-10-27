#include <iostream>
#include <cstring> // For strcpy
#include <string>  // For std::string
using namespace std;

struct Person {
    string name; // Using std::string for ease
    int age;
    float height;
};

// Function to demonstrate enum
enum Color { RED, GREEN, BLUE };

// Function prototypes
void demonstratePrimitiveTypes();
void demonstrateDerivedTypes();

int main() {
    cout << "Primitive Data Types:" << endl;
    demonstratePrimitiveTypes();
    
    cout << "\nDerived Data Types:" << endl;
    demonstrateDerivedTypes();
    
    return 0;
}

void demonstratePrimitiveTypes() {
    // Integer
    int age = 25;
    cout << "Age (int): " << age << endl;

    // Floating-point
    float temperature = 36.5f;
    double pi = 3.141592653589793;
    cout << "Temperature (float): " << temperature << "°C" << endl;
    cout << "Pi (double): " << pi << endl;

    // Character
    char initial = 'B';
    cout << "Initial (char): " << initial << endl;

    // Boolean
    bool isAvailable = true;
    cout << "Is Available (bool): " << (isAvailable ? "Yes" : "No") << endl;
}

void demonstrateDerivedTypes() {
    // Array
    int scores[5] = {85, 90, 78, 92, 88};
    cout << "Scores (array): ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Pointer
    int number = 10;
    int* ptr = &number;  // Pointer to an integer
    cout << "Number (int) via pointer: " << *ptr << endl; // Dereference pointer

    // Structure
    Person person;
    person.name = "Bulbul shah";
    person.age = 19;
    person.height = 5.1f;
    cout << "Person (struct): " << person.name << ", Age: " << person.age << ", Height: " << person.height << " ft" << endl;

    // Enumeration
    Color favoriteColor = GREEN;
    cout << "Favorite Color (enum): " << favoriteColor << " (0: RED, 1: GREEN, 2: BLUE)" << endl; // Outputs 1 for GREEN
}

