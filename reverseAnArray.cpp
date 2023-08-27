#include<iostream>
using namespace std;

void reverse(int arr[], int n){	
	int start =0;
	int end = n-1;
	
	while(start<=end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	for(int i = 0; i<10; i++){
   	    cout << arr[i] << " ";
	    }
   }

int main(){
   int arr[10] = {5,7,-2, 10, 22, -2,0, 5, 22, 1};
  
   reverse(arr, 10);
   	
}
