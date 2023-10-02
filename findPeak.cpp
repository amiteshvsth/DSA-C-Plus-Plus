#include<iostream>
#include <algorithm>
using namespace std;

int findPeak(int *arr,int n,int s,int e){
 if(s>e) return -1;
 int mid=s+(e-s)/2;
 if(arr[mid]<arr[mid+1]) return findPeak(arr,n,mid+1,e);
 else return findPeak(arr,n,s,mid);
 return s;
}

int main(){
    int arr[5] = {3, 8, 11, 14, 16};
    int n=5;
    int s=0, e=n-1;
    cout<<findPeak(arr,n,s,e);
    return 0;
}