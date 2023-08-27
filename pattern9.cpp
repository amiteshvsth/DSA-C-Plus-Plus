#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	while(row<=n){
	 int col = 1;
	 int num =row;
	 while(col<=row){
	 	cout<<num;
	 	num=num+1;
	 	col=col+1;
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
1
23
345
4567
56789
67891011
78910111213
89101112131415
91011121314151617
10111213141516171819
1112131415161718192021
121314151617181920212223

*/
