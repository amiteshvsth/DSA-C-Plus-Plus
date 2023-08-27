#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: "; 
	cin>>n;
	
	int row=1;	
	while(row<=n){
	 int num = 1;
	 while(num<n-row+2){
	 	cout<<num;
	 	num++;
	 }	
	 int stars=1;
	 while(stars<row*2-1){
	 	cout<<"*";
	 	stars++;
	 }
	 int col = 1;
	 while(col<=n-row+1){
	 	int	num=n-row-col+2;
	 	cout<< num;
	 	col=col+1; 	
	 }	
	 
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
123456789101112121110987654321
1234567891011**1110987654321
12345678910****10987654321
123456789******987654321
12345678********87654321
1234567**********7654321
123456************654321
12345**************54321
1234****************4321
123******************321
12********************21
1**********************1

*/

