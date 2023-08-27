#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: "; 
	cin>>n;
	
	int row=1;
	while(row<=n){
	 int space =n-1;
	 while(space>n-row){
	 	cout<<" ";
	 	space--;
	 }	
	 int col =1;
	 while(col<=n-row+1){
		cout<<col+row-1;
		col++;
	 }
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
123456789101112
 23456789101112
  3456789101112
   456789101112
    56789101112
     6789101112
      789101112
       89101112
        9101112
         101112
          1112
           12
*/

