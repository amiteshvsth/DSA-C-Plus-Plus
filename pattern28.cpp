#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	while(row<=n){
	int col =1;
	while(col<=n){
		if(row+col>n){
			cout<<row;	
		}
		else{
			cout<<" ";
		}
		col++;
	}
	 cout <<endl;
	 row =row+1;
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

