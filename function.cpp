#include "function.h"

#if defined(INTEGER)
void FillArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void ShowArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindMin(int arr[], int size) {
    return *min_element(arr, arr + size);
}

int FindMax(int arr[], int size) {
    return *max_element(arr, arr + size);
}

void SortArray(int arr[], int size) {
    sort(arr, arr + size);
}

void EditArray(int arr[], int size, int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
#endif

#if defined(CHAR)
void FillArray(char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<char>('A' + rand() % 26);
    }
}

void ShowArray(char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

char FindMin(char arr[], int size) {
    return *min_element(arr, arr + size);
}

char FindMax(char arr[], int size) {
    return *max_element(arr, arr + size);
}

void SortArray(char arr[], int size) {
    sort(arr, arr + size);
}

void EditArray(char arr[], int size, int index, char value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
#endif

#if defined(DOUBLE)
void FillArray(double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 100) / 10.0;
    }
}

void ShowArray(double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double FindMin(double arr[], int size) {
    return *min_element(arr, arr + size);
}

double FindMax(double arr[], int size) {
    return *max_element(arr, arr + size);
}

void SortArray(double arr[], int size) {
    sort(arr, arr + size);
}

void EditArray(double arr[], int size, int index, double value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
#endif
#if defined(STRING)
void FillArray(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = "String" + to_string(i);
    }
}

void ShowArray(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

string FindMin(string arr[], int size) {
    return *min_element(arr, arr + size);
}

string FindMax(string arr[], int size) {
    return *max_element(arr, arr + size);
}

void SortArray(string arr[], int size) {
    sort(arr, arr + size);
}

void EditArray(string arr[], int size, int index, const string& value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
#endif