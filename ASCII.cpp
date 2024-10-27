#include <iostream>
using namespace std;

int main() {
    float userFloat;
    cout << "Enter a floating-point number: ";
    cin >> userFloat;

    int convertedInt = static_cast<int>(userFloat);  
    cout << "Converted integer: " << convertedInt << endl;

    
    char character = 'A';
    int numberToAdd = 10;
    char resultChar = character + numberToAdd;  

    cout << "Character '" << character << "' + " << numberToAdd 
         << " results in character: '" << resultChar << "'" << endl;

    return 0;
}

