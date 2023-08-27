#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	char ch='A';
	while(row<=n){
	 int col = 1;
	 while(col<=row){
	 	cout<< ch;
	 	col=col+1; 	
	 	ch++;
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
A
BC
DEF
GHIJ
KLMNO
PQRSTU
VWXYZ[\
]^_`abcd
efghijklm
nopqrstuvw
xyz{|}~¶«ьй
вдаезклипомƒ

*/
