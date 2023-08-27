#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: "; 
	cin>>n;
	
	int row=1;
	int num=1;
	while(row<=n){
	 int space =n-row;
	 while(space){
	 	cout<<" ";
	 	space--;
	 }	
	 int col =1;
	 while(col<=row){
		cout<<num;
		col++;
		num++;
	 }
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
           1
          23
         456
        78910
       1112131415
      161718192021
     22232425262728
    2930313233343536
   373839404142434445
  46474849505152535455
 5657585960616263646566
676869707172737475767778
*/
