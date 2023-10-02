#include<vector>
#include<iostream>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i] > mid){
                return false;
            }
            pageSum=arr[i];
        }
        if(studentCount>m) return false;
        
    }
    return true;
    
}
int allocateBooks(vector<int> arr, int n, int m, int s, int e, int ans){
    int mid=s+(e-s)/2;
    if(s>e) return ans;
    if(isPossible(arr,n, m,mid)){
        return allocateBooks(arr, n, m ,s,mid-1,mid);
    }else{
        return allocateBooks(arr, n, m ,mid+1, e, ans);
    }
    return ans;
}

int main(){
    vector<int> arr={12, 34, 67, 90};
    int n=arr.size();
    int m=2;
    int s=0,sum=0,ans=-1;
     for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e=sum;
    cout<<allocateBooks(arr, n, m, s, e,ans);
}