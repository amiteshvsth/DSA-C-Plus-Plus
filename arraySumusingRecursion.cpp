#include<iostream>
using namespace std;
int sum(int *arr, int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }else{
       return (sum(arr, size-1)+arr[size-1]);
    }
     

}
int main(){
    int arr[7]={0,3,5,2,3,5,5};
    int size= 7;
    cout << sum(arr, size);

}