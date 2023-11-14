#include <iostream>
#include "lab.h"

using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Менше з " << a << " і " << b << ": " << MIN(a, b) << endl;
    cout << "Більше з " << a << " і " << b << ": " << MAX(a, b) << endl;
    cout << a << " у квадраті: " << SQUARE(a) << endl;
    cout << a << " підняте до степеня 3: " << POWER(a, 3) << endl;

    if (IS_EVEN(a))
        cout << a << " - парне число." << endl;
    else
        cout << a << " - непарне число." << endl;

    if (IS_ODD(b))
        cout << b << " - непарне число." << endl;
    else
        cout << b << " - парне число." << endl;

    return 0;
}