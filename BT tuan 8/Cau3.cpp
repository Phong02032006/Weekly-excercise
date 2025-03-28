//
// Created by HLC_2021 on 3/28/2025.
//
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  printArray(arr, n);
}

/*Ưu điểm:
Dễ hiểu và dễ cài đặt
Không cần bộ nhớ bổ sung(sắp xếp tại chỗ)
Hiệu quả khi mảng gần như đã được sắp xếp
Nhược điểm:
Hiệu suất kém với các tập dữ liệu lớn
Số lần hoán đổi nhiều hơn so với Selection Sort và Insertion Sort

Bubble Sort phù hợp với mảng nhỏ hoặc đã gần như sắp xếp.

Nếu cần ít hoán đổi, Selection Sort là lựa chọn tốt hơn.

Nếu mảng gần như đã sắp xếp, Insertion Sort hoạt động nhanh hơn.
