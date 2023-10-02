#include<iostream>
#include<vector>
using namespace std;

int find_pivot(vector<int> v,int s,int e){
    int mid=s+(e-s)/2;
    if(s>e) return s;
    if(v[mid]<v[mid+1]) return find_pivot(v,mid+1,e);
    else return find_pivot(v,s,mid);
    return s;
}

int binarySearch(vector<int> &arr, int s, int e, int k){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==k) return mid;
    if(arr[mid]>k) return binarySearch(arr,s,mid-1,k);
    else return binarySearch(arr,mid+1,e,k);
}

int findPosition(vector<int> &arr, int n, int k){
    int s=0, e=n-1;
    int pivot=find_pivot(arr,s,e);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr,0, pivot-1,k);
    }
}

int main(){
    vector<int> arr={7,8,9,1,3,5,6};
    int n=7;
    int k=9;
    cout<<findPosition(arr,n,k);
}