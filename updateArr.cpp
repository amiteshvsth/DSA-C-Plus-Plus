#include<iostream>
using namespace std;

void update(int arr[],int n){

	cout << endl << "Inside the function" <<endl;
	
	// updates the main arr in case of array
	arr[0]= 120;
	
	for(int i = 0; i<3; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(){
	int arr[3] = {1,2,3};
	
	// address of first element of array is passed so 
	// that it changes the original array
	update(arr, 3);
	
	for(int i = 0; i<3; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
