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
	 	cout<<row-col+1;
	 	col=col+1;
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
1
21
321
4321
54321
654321
7654321
87654321
987654321
10987654321
1110987654321
121110987654321

*/
