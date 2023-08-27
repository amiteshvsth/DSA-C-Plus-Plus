#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int i=1;
	while(i<=n){
	 int j = 1;
	 while(j<=n){
	 	cout<<i;
	 	j=j+1;
	 }	
	 cout <<endl;
	 i =i+1; 
	}	
}

/*
Enter value of n: 12
111111111111
222222222222
333333333333
444444444444
555555555555
666666666666
777777777777
888888888888
999999999999
101010101010101010101010
111111111111111111111111
121212121212121212121212
*/
