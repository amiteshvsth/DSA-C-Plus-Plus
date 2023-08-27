// # is known as preprocessor and it is 
// importing iostream library
#include<iostream> 
// std namespace contains cin and cout functions defined
using namespace std;

void swapAdjacent(int arr[],int n){
	
	for(int i = 0; i<n; i+=2){ // i+=2 to skip 1 iteration
	//To check if next element is in array or 
	//not to avoid last iteration if no. of elements is odd
		if(i+1<n){ 
			swap(arr[i], arr[i+1]);
		}
	}
	// printing the array
	for(int i =0; i<n; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	// creating the array of size defined by user 
	// size is defined at runtime 
	int arr[size];
	
	cout << "Enter the elements of array: ";
	for(int i = 0; i<size; i++){
		cin >> arr[i] ;
	}
	cout << endl;
	
	swapAdjacent(arr, size);
	
	return 0;
}
