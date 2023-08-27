#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	bool b = true;
	
	for(int i=2; i<=(n/2); i++){
		if(n%i==0){
			b=false;
			break;
		}
	}
	if(b==false){
		cout<<"not prime" <<endl;
	}else{
		cout<<"prime" <<endl;	
	}
}
/*
Enter value of n: 4
not prime
*/
