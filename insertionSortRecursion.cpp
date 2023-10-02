#include<iostream>
using namespace std;
void insertionSort(int *arr, int N){
    int i,key,j;
    for (i = 1; i < N; i++){
        if(N<=1) return;

        insertionSort(arr,N-1);
        int last =arr[N-1];
        int j=N-2;
        while (j>=0 && arr[j]>last)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=last;
    }
    
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, N);
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}