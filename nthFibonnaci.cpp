#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;
    
    for (int i = 3; i<=n; i++){
    	int fibn = a+b;
    	a=b;
    	b=fibn;
	}
    return b;		
}

int main(){
	int a;
	cout<<"Enter value of a: ";
	cin>>a;
	
		
	cout << a<<"th fibonacci number is: " << fib(a);
}

/*
Enter value of a: 12
12th fibonacci number is: 89
*/
