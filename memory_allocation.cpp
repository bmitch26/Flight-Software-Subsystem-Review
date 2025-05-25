/*
Memory Allocation Basics!!!
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