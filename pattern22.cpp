#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	while(row<=n){
	 int col = 1;
	 char ch='A'+row-1;
	 while(col<=n){
	 	cout<<ch;
	 	ch++;
	 	col=col+1; 	
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
ABCDEFGHIJKL
BCDEFGHIJKLM
CDEFGHIJKLMN
DEFGHIJKLMNO
EFGHIJKLMNOP
FGHIJKLMNOPQ
GHIJKLMNOPQR
HIJKLMNOPQRS
IJKLMNOPQRST
JKLMNOPQRSTU
KLMNOPQRSTUV
LMNOPQRSTUVW

*/
