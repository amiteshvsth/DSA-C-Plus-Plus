#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	while(row<=n){
	 int space = n-1;
	 while(space>n-row){
	 	cout<<" ";
	    space=space-1;
	}
	int col =1;
	while(col<=n-row+1){
		cout<<"*";
		col++;
	}
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
************
 ***********
  **********
   *********
    ********
     *******
      ******
       *****
        ****
         ***
          **
           *

*/

