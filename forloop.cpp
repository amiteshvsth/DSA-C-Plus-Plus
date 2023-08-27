#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	cout << "Printing the count from 1 to " <<n << endl;
	for (int i=1; i<=n; i++){
		cout << i << endl;
	}
	
	/*
	works correct
	int i=1;
	for (; i<=n; i++){
		cout << i << endl;
	}
	
	works correct
	int i=1;
	for (; i<=n; ){
		cout << i << endl;
		i++;
	}
	
	works incorrect as it does not know when to stop
	int i=1;
	for(; ;){
	  if(i<=n) {
	      cout << i << endl;
      }
     i++;
	} 
	
	works correct as it knows the termination by break
	int i=1;
	for(; ;){
	  if(i<=n) {
	      cout << i << endl;
      }else {
         break;
     }
     i++;
	} 
	
	we can also write multiple intialization, 
	conditions and updations in for loop
	
	for (int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
		cout << a <<" " << b <<" " << c << endl;
	}
	
	
Enter the value of n: 12
Printing the count from 1 to 12
1
2
3
4
5
6
7
8
9
10
11
12

	*/
}
