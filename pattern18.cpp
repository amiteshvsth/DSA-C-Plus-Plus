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
	 	char ch='A'+row-1;
	 	cout<< ch;
	 	col=col+1; 	
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
IIIIIIIII
JJJJJJJJJJ
KKKKKKKKKKK
LLLLLLLLLLLL

*/
