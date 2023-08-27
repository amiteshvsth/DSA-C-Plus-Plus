#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int i=1;
	int num =1;
	while(i<=n){
	 int j = 1;
	 while(j<=i){
	 	cout<<num;
	 	num=num+1;
	 	j=j+1;
	 }	
	 cout <<endl;
	 i =i+1;
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
