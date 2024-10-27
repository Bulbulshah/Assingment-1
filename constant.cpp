#include <iostream>
using namespace std;

const double PI = 3.14159; // Declaring PI as a constant

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculating area and circumference using the constant PI
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

