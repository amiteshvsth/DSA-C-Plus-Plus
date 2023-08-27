#include<iostream>
#include<math.h>
using namespace std;

bool isEven(int n){
	if(n%2==0 ){
		return true;
	}
	return false; // n&1
}
int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	cout << isEven(n);
}

/*
Enter value of n: 12
1
*/
