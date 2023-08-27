#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	while(row<=n){
	 int col = 1;
	 while(col<=row){
	 	char ch='A'+n-row+col-1;
	 	cout<<ch;
	 	col=col+1; 	
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
L
KL
JKL
IJKL
HIJKL
GHIJKL
FGHIJKL
EFGHIJKL
DEFGHIJKL
CDEFGHIJKL
BCDEFGHIJKL
ABCDEFGHIJKL

*/
