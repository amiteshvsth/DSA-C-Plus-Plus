#include<iostream>
using namespace std;

int getMax(int num[],int n){
	int max = INT_MIN;
	for(int i = 0; i<n; i++){
		if(num[i]>max){
		 max = num[i];	
		} 
	}
	return max;
}

int getMin(int num[],int n){
	int min = INT_MAX;
	for(int i = 0; i<n; i++){
		if(num[i]<min){
		 min = num[i];	
		} 
	}
	return min;
}
int main(){
	int size;
	cin >> size;
	int arr[100];
	for(int i = 0; i<size; i++){
		cin >> arr[i] ;
	}
	
	cout << "Max value is : " << getMax(arr, size) << endl;
	cout << "Min value is : " << getMin(arr, size);
	return 0;
}
