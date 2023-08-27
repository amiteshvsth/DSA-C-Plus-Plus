#include<iostream>
using namespace std;

int power(int a , int b){
	int ans = 1;
	for (int i = 1; i<=b; i++){
		ans = ans * a;
	}
	return ans;
}
int main(){
	int a;
	cout<<"Enter value of a: "; 
	cin>>a;
	
	int b;
	cout<<"Enter value of b: "; 
	cin>>b;
	
	cout << "Answer is : " << power(a,b) <<endl;
	
	return 0;
	}	
/*
Enter value of a: 12
Enter value of b: 3
Answer is : 1728
*/

