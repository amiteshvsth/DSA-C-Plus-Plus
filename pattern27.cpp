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
		cout<<row;
		col++;
	}
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
111111111111
 22222222222
  3333333333
   444444444
    55555555
     6666666
      777777
       88888
        9999
         101010
          1111
           12

*/

