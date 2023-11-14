#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "lab.h"

using namespace std;

int main() {
    srand(time(nullptr));

    int a = rand() % 100;
    int b = rand() % 100;

    cout << "Less than " << a << " ³ " << b << ": " << MIN(a, b) << endl;
    cout << "More with " << a << " ³ " << b << ": " << MAX(a, b) << endl;
    cout << a << " in a square: " << SQUARE(a) << endl;
    cout << a << " raised to the 3rd power: " << POWER(a, 3) << endl;

    if (IS_EVEN(a))
        cout << a << " - even number." << endl;
    else
        cout << a << " - odd number." << endl;

    if (IS_ODD(b))
        cout << b << " - odd number." << endl;
    else
        cout << b << " - even number." << endl;

    return 0;
}