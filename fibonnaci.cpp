#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	int a=0;
	int b=1;
	int temp;
	cout << "Printing the sum from 1 to " <<n << endl;
	cout << a <<" "<< b << " ";
	for (int i=1; i<=n-2; i++){		
		temp=a+b;
		a=b;
		b=temp;
		cout << b <<" ";
		
	}
}
/*
	for (int i=1; i<=n-2; i++){		
		int temp=a+b;
		cout << temp <<" ";
		a=b;
		b=temp;
		
	}
}

Enter the value of n: 12
Printing the sum from 1 to 12
0 1 1 2 3 5 8 13 21 34 55 89
*/
