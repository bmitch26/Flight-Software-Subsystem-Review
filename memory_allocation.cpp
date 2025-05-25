/*
Memory Allocation Basics!!!
Dynamic memory is memory that is allocated after the program
is already compiled and running.
Use the 'new' operator to allocate memory in the heap rather
than the stack.
Useful when we don't known how much memory we will need. This 
makes our programs more flexible, especially when accepting
user input.
*/

#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5]; // allocate array of 5 integers

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // note the [] here for arrays!!
    return 0;
}