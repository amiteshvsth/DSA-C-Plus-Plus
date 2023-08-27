#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int i=1;
	while(i<=n){
	 int j = 1;
	 while(j<=i){
	 	cout<<i;
	 	j=j+1;
	 }	
	 cout <<endl;
	 i =i+1;
	}	
}

/*
Enter value of n: 12
1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010
1111111111111111111111
121212121212121212121212
*/
