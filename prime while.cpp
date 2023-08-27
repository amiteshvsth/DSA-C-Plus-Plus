#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	bool b = false;
	
	int i=2;
	while(i<=(n/2)){
		if(n%i!=0){
			b=false;
		} else{
			b = true;
		}
		i=i+1;
	}
	if(b==true){
		cout<<"not prime" <<endl;
	}else{
		cout<<"prime" <<endl;	
	}
}
/*
Enter value of n: 12
not prime
*/
