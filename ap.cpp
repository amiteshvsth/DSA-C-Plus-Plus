#include<iostream>
#include<math.h>
using namespace std;

int ap(int n){
	return 3*n +7;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
		
	cout << "Arithmetic progression is : " << ap(n);
}

/*
Enter value of n: 12
Arithmetic progression is : 43
*/
