#include <iostream>
using namespace std;

int main() {
    float temperature = 65.9f;     
    int age = 19;                   
    double pi = 3.14;  
    char initial = 'Z';             
    bool isAvailable = true;        

    cout << "Primitive Data Types:" << endl;
    cout << "Age (int): " << age << endl;
    cout << "Temperature (float): " << temperature << "°C" << endl;
    cout << "Pi (double): " << pi << endl;
    cout << "Initial (char): " << initial << endl;
    cout << "Is Available (bool): " << (isAvailable ? "Yes" : "No") << endl;

    return 0;
}

