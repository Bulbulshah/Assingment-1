#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int int1 = 10;
    int int2 = 3;

    float float1 = 5.5f;
    float float2 = 2.2f;

    cout << "Integer Operations:" << endl;
    cout << int1 << " + " << int2 << " = " << (int1 + int2) << endl;
   cout << int1 << " - " << int2 << "= " <<(int1 - int2) <<endl;
   cout << int1 <<" * " << int2 << "= " <<(int1 * int2) <<endl;
   cout << int1 <<" / " << int2 << "= " <<(int1 / int2) <<endl;

    cout << fixed << setprecision(3);
    cout << "\n floating Operations: " << endl;
    cout << float1 << " + " << float2 << " = " << (float1 + float2) <<endl;
    cout << float1 << " - " << float2 << " = " << (float1 - float2) <<endl;
    cout << float1 << " * " << float2 << " = " << (float1 * float2) <<endl;
    cout << float1 << " / " << float2 << " = " << ( float1 / float2)<< endl;

    return 0;
}

