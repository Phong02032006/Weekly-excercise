//
// Created by Admin on 3/20/2025.
//
#include <iostream>
using namespace std;
int binary_seach(int* arr,int left,int right, int target)
 {
    if(left>right) return -1;
    int mid = (left+right)/2;
    if(arr[mid] == target){
      return mid;
      }
      else if(arr[mid] > target){
           return binary_seach(arr,left,mid-1,target);
      }
      else {
        return binary_seach(arr,mid+1,right,target);
        }
 }
int main (){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = binary_seach(arr, 0, 10, target);
    cout << result << endl;
    return 0;
}