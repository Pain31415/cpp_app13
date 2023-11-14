#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lab.h"
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    srand(time(nullptr));

    int a = rand() % 100;
    int b = rand() % 100;

    cout << u8"Менше з " << a << u8" і " << b << u8": " << MIN(a, b) << endl;
    cout << u8"Більше з " << a << u8" і " << b << u8": " << MAX(a, b) << endl;
    cout << a << u8" 在一个正方形里: " << SQUARE(a) << endl;
    cout << a << u8" 提高到 3 次方: " << POWER(a, 3) << endl;

    if (IS_EVEN(a))
        cout << a << u8" - 偶数." << endl;
    else
        cout << a << u8" - 奇数." << endl;

    if (IS_ODD(b))
        cout << b << u8" - 奇数." << endl;
    else
        cout << b << u8" - 偶数." << endl;

    return 0;
}