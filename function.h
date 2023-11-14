#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

#define INTEGER
#define CHAR
#define DOUBLE
#define STRING

#ifdef(INTEGER)
void FillArray(int arr[], int size);
void ShowArray(int arr[], int size);
int FindMin(int arr[], int size);
int FindMax(int arr[], int size);
void SortArray(int arr[], int size);
void EditArray(int arr[], int size, int index, int value);
#endif

#ifdef(CHAR)
void FillArray(char arr[], int size);
void ShowArray(char arr[], int size);
char FindMin(char arr[], int size);
char FindMax(char arr[], int size);
void SortArray(char arr[], int size);
void EditArray(char arr[], int size, int index, char value);
#endif

#ifdef(DOUBLE)
void FillArray(double arr[], int size);
void ShowArray(double arr[], int size);
double FindMin(double arr[], int size);
double FindMax(double arr[], int size);
void SortArray(double arr[], int size);
void EditArray(double arr[], int size, int index, double value);
#endif

#ifdef(STRING)
void FillArray(string arr[], int size);
void ShowArray(string arr[], int size);
string FindMin(string arr[], int size);
string FindMax(string arr[], int size);
void SortArray(string arr[], int size);
void EditArray(string arr[], int size, int index, const string& value);
#endif

#endif