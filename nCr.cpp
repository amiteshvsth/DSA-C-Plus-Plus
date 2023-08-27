#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
	int fact =1 ;
	for (int i = 1; i<=n; i++){
	 fact = fact * i;	
	}
	return fact;
}

int nCr(int n, int r){
	int num = fact(n);
	int den = fact(r) * fact(n-r);
     return num/den;
}
int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int r;
	cout<<"Enter value of r: ";
	cin>>r;
	
	cout << "Total combinations are : " << nCr(n,r );
}

/*
Enter value of n: 12
Enter value of r: 2
Total combinations are : 66
*/
