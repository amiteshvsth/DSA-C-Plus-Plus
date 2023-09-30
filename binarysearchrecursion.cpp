#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==k) return true;
    if(arr[mid]>k) return binarySearch(arr,s,mid-1,k);
    else return binarySearch(arr,mid+1,e,k);
}
int main(){
    int arr[7]={0,1,3,5,6,8,9};
    int key=8;
    cout << binarySearch(arr, 0, 6,key);
    return 0;

}