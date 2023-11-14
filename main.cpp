#include <iostream>
#include "lab.h"

using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "����� � " << a << " � " << b << ": " << MIN(a, b) << endl;
    cout << "������ � " << a << " � " << b << ": " << MAX(a, b) << endl;
    cout << a << " � �������: " << SQUARE(a) << endl;
    cout << a << " ������ �� ������� 3: " << POWER(a, 3) << endl;

    if (IS_EVEN(a))
        cout << a << " - ����� �����." << endl;
    else
        cout << a << " - ������� �����." << endl;

    if (IS_ODD(b))
        cout << b << " - ������� �����." << endl;
    else
        cout << b << " - ����� �����." << endl;

    return 0;
}