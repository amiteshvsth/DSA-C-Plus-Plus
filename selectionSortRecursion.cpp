#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int mini(int *a, int i, int j){
    if(i==j) return i;
    int k =mini(a, i+1,j);
    // Return minimum of current and remaining.
    return (a[i]<a[k])?i:k;
}
void selectionSort(int *arr, int n, int idx=0){
    // Return when starting and size are same
    if(idx==n) return;

    // calling mini function for minimum index
    int k= mini(arr,idx,n-1);

    // Swapping when index and minimum index are not same
    if(k!=idx) swap(arr[k],arr[idx]);

    // Recursively calling selection sort function
    selectionSort(arr,n, idx+1);
    
}

int main(){
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}