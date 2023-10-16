#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int st = s; 
    int end = e;
    int k = e;
    for (int i = e; i > s; i--) {
        if (arr[i] > pivot)
            swap(arr[i], arr[k--]);
    }
    swap(arr[s], arr[k]);
    return k;     
}
void quickSort(int *arr, int s, int e){
    if(s>=e)  return;
    
    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[10]={2,4,1,6,8,4,6,9,8,2};
    int n=10;

    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}