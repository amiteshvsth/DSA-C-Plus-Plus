#include<iostream>
using namespace std;

int firstIndex(int *arr, int s,int e,int key,int ans){
    int mid=s+(e-s)/2;
    if(s>e) return ans;
    if(arr[mid]==key){
        ans=mid;
        return firstIndex(arr,s,mid-1,key,ans);
    } 
    else if(arr[mid]>key){
        return firstIndex(arr,s,mid-1,key,ans);
    }else{
        return firstIndex(arr,mid+1,e,key,ans);
    }
}
int lastIndex(int *arr, int s,int e,int key,int ans){
    int mid=s+(e-s)/2;
    if(s>e) return ans;
    if(arr[mid]==key){
        ans=mid;
        return lastIndex(arr,mid+1,e,key,ans);
    } 
    else if(arr[mid]>key){
        return lastIndex(arr,s,mid-1,key,ans);
    }else{
        return lastIndex(arr,mid+1,e,key,ans);
    }
}
int main(){
    int arr[8]={1,2,3,3,3,3,4,5};
    int size=8;
    int key=3;
    int ans=-1;
    cout<<"First Index of Element is: "<<firstIndex(arr,0,7,key,ans)<<endl;
    cout<<"Last Index of Element is: "<<lastIndex(arr,0,7,key,ans)<<endl;
}