#include<vector>
#include<iostream>
using namespace std;

int find_pivot(vector<int> v,int s,int e){
    int mid=(s+e/2);
    if(s>e) return -1;
    if(v[mid]<v[mid+1]) return find_pivot(v,mid+1,e);
    else return find_pivot(v,s,mid);
    return s;
}

int main(){
    vector<int> v={2,4,5,6,7,8};
    int n=6;
    int s=0, e=n-1;
    cout<<find_pivot(v,s,e);
}