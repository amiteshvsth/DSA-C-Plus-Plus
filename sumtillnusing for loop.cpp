#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int sum=0;
	cout << "Printing the sum from 1 to " <<n << endl;
	for (int i=1; i<=n; i++){
		sum+=i;
	}
	cout << sum << endl;
}
/*
Enter the value of n: 4
Printing the sum from 1 to 4
10
*/
