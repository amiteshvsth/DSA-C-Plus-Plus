#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int i =2;
	int sum = 0;
	while(i<=n){
	sum = sum+i;
	i=i+2;	
	}
	cout << sum <<endl;

}
/*
Enter value of n: 78
1560
*/
