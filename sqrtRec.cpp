#include<iostream>
using namespace std;

long long int sqrtInt(int n,int s, int e,int ans){
    long long int mid=s+(e-s)/2;
    if(s>e) return ans;
    long long int sq= mid*mid;
    if(sq==n) return mid;
    if(sq<n) sqrtInt(n, mid+1,e,mid);
    else sqrtInt(n,s,mid-1,ans);
    return ans;

}
double morePrecision(int n,int precision, int temp){
    double factor =1;
    double ans=temp;
    for(int i=0; i<precision; i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int s=0,e=n;
    long long int ans=-1;

    int temp =sqrtInt(n,s,e,ans);
    cout<<morePrecision(n,3,temp)<<endl;

    return 0;
}