//
// Created by Admin on 3/19/2025.
//
#include <iostream>

using namespace std;
void printArraySize(int arr[]) {
    cout << sizeof(arr) << endl;
}
int main() {
    int A[5] = {1, 2, 3, 4, 5};
    cout <<  sizeof(A)  << endl;
    printArraySize(A);
    return 0;
}

