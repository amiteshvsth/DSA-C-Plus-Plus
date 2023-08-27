#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: "; 
	cin>>n;
	
	int row=1;
	
	while(row<=n){
	 int space =n-row;
	 while(space){
	 	cout<<" ";
	 	space--;
	 }	
	 int col =1;
	 while(col<=row){
		cout<<col;
		col++;
	 }
	 int start=row-1;
	 while(start){
		cout<<start;
		start--;
	 }
	 
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
           1
          121
         12321
        1234321
       123454321
      12345654321
     1234567654321
    123456787654321
   12345678987654321
  12345678910987654321
 123456789101110987654321
1234567891011121110987654321
*/
