#include<iostream>
using namespace std;

bool isPresent(int arr[], int key){
	for(int i = 0; i<10; i++){
   	    if(arr[i]==key){
   		return true;
	    }
   }
   return false;
}
int main(){
   int arr[10] = {5,7,-2, 10, 22, -2,0, 5, 22, 1};
   int key;
   cout << "Enter element to search: " << endl;
   cin >> key;
    
   if(isPresent(arr, key)){
   	cout << "Present";
   }
   else{
   	cout << "Absent";
   }
   	
}
