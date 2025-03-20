//
// Created by Admin on 3/19/2025.
//
#include <iostream>

using namespace std;

// Hàm đếm số lượng số chẵn trong mảng
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int evenCountFirstHalf = count_even(A, 5);
    cout <<  evenCountFirstHalf << endl;
    int evenCountSecondHalf = count_even(A + 5, 5);
    cout << evenCountSecondHalf << endl;
    return 0;
}

