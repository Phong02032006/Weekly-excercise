//
// Created by HLC_2021 on 3/28/2025.
//
#include <iostream>
using namespace std;
void findPairs(int arr[], int N, int K) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == K) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main()
    {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
    cin >> arr[i];
    }
    int k;
    cin >> k;
    findPairs(arr, n, k);
  }