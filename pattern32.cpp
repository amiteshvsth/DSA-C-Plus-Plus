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
	 int num=1;
	 int col =1;
	 while(col<=row){
		cout<<num;
		col++;
		num++;
	 }
	 int numb=row;
	 while(numb<=n){
		cout<<numb;
		numb++;
	 }
	 
	 cout <<endl;
	 row =row+1;
	}	
}
/*
Enter value of n: 12
           1123456789101112
          1223456789101112
         1233456789101112
        1234456789101112
       1234556789101112
      1234566789101112
     1234567789101112
    1234567889101112
   1234567899101112
  12345678910101112
 12345678910111112
12345678910111212

*/

