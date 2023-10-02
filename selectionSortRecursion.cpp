#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int mini(int *a, int i, int j){
    if(i==j) return i;
    int k =mini(a, i+1,j);
    return (a[i]<a[k])?i:k;
}
void selectionSort(int *arr, int n, int idx=0){
    if(idx==n) return;
    int k= mini(arr,idx,n-1);
    if(k!=idx) swap(arr[k],arr[idx]);
    selectionSort(arr,n, idx+1);
    
}

int main(){
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}