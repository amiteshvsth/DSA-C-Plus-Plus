#include<iostream>
using namespace std;

void sum(int arr[],int n){
	int sum =0;
	for(int i = 0; i<n; i++){
		sum += arr[i];
	}
	cout << sum << endl;
}
int main(){
	int size;
	cin >> size;
	
	int arr[size];
	
	for(int i = 0; i<size; i++){
		cin >> arr[i] ;
	}
	cout << endl;
	
	sum(arr, size);
	
}
