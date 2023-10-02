#include<iostream>
using namespace std;
void insertionSort(int *arr, int N){
    int i,key,j;
    for (i = 1; i < N; i++){
        //if size of array is less than or equal to 1 just keep it as it is
        if(N<=1) return;

        //otherwise calling insertionSort for n-1
        insertionSort(arr,N-1);
        int last =arr[N-1];
        int j=N-2;
        //traversing from backwards comparing 2nd last element with last element
        // if found big 
        while (j>=0 && arr[j]>last)
        {
            //swapping the values
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