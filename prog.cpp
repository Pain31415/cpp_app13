#include "function.h"

int main() {
    const int size = 5;
    srand(time(nullptr));

#if defined(INTEGER)
    int intArray[size];
    FillArray(intArray, size);

    cout << "Original Integer Array: ";
    ShowArray(intArray, size);

    cout << "Min Value: " << FindMin(intArray, size) << endl;
    cout << "Max Value: " << FindMax(intArray, size) << endl;

    SortArray(intArray, size);
    cout << "Sorted Integer Array: ";
    ShowArray(intArray, size);

    EditArray(intArray, size, 2, 100);
    cout << "Integer Array after editing: ";
    ShowArray(intArray, size);
#endif

#if defined(CHAR)
    char charArray[size];
    FillArray(charArray, size);

    cout << "Original Char Array: ";
    ShowArray(charArray, size);

    cout << "Min Value: " << FindMin(charArray, size) << endl;
    cout << "Max Value: " << FindMax(charArray, size) << endl;

    SortArray(charArray, size);
    cout << "Sorted Char Array: ";
    ShowArray(charArray, size);

    EditArray(charArray, size, 2, 'Z');
    cout << "Char Array after editing: ";
    ShowArray(charArray, size);
#endif

#if defined(DOUBLE)
    double doubleArray[size];
    FillArray(doubleArray, size);

    cout << "Original Double Array: ";
    ShowArray(doubleArray, size);

    cout << "Min Value: " << FindMin(doubleArray, size) << endl;
    cout << "Max Value: " << FindMax(doubleArray, size) << endl;

    SortArray(doubleArray, size);
    cout << "Sorted Double Array: ";
    ShowArray(doubleArray, size);

    EditArray(doubleArray, size, 2, 99.99);
    cout << "Double Array after editing: ";
    ShowArray(doubleArray, size);
#endif

#if defined(STRING)
    string stringArray[size];
    FillArray(stringArray, size);

    cout << "Original String Array: ";
    ShowArray(stringArray, size);

    cout << "Min Value: " << FindMin(stringArray, size) << endl;
    cout << "Max Value: " << FindMax(stringArray, size) << endl;

    SortArray(stringArray, size);
    cout << "Sorted String Array: ";
    ShowArray(stringArray, size);

    EditArray(stringArray, size, 2, "EditedString");
    cout << "String Array after editing: ";
    ShowArray(stringArray, size);
#endif

    return 0;
}