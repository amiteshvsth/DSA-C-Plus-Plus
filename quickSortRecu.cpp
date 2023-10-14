#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
     int pivot=arr[s];
     int cnt=0;
     for (int i = s+1; i <=e; i++){
        if(arr[i]<=pivot)  cnt++;
     }

     int pivotIdx=s+cnt;
     swap(arr[pivotIdx],arr[s]);
     int i=s, j=e;
     while (i<pivotIdx && j>pivotIdx){
        while (arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i++],arr[j--]);
        }  
     }
     return pivotIdx;     
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