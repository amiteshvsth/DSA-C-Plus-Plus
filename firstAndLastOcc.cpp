#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int mid= start+(end-start)/2;
    int ans=-1;
	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
            end = mid-1;

		}
		else if(arr[mid]<key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid= start+(end-start)/2;
	}
	return ans;
}
int lastOcc(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int mid= start+(end-start)/2;
    int ans =-1;
	while(start<=end){
		if(arr[mid]==key){
            ans=mid;
			start = mid+1;
		}
		else if(arr[mid]<key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid= start+(end-start)/2;
	}
	return ans;
}
int main(){
	int arr[9]={0,4,4,4,4,5,7,7,8};
	cout << "First Occurence of 4 is: " << firstOcc(arr,9,4) << endl;
	cout << "Last Occurence of 4 is: " << lastOcc(arr,9,4) << endl;
}
