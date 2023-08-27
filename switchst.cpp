#include<iostream>
using namespace std;

int main(){
	int a,b;
	char op;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the operation: ";
	cin >> op;
	cout << "Answer is : ";
	
	switch(op){
		case '+':
			cout << a+b <<endl;
			break;
		
		case '-':
			cout << a-b <<endl;
			break;
		
		case '*':
			cout << a*b <<endl;
			break;
			
		case '/':
			cout << a/b <<endl;
			break;
			
		case '%':
			cout << a%b <<endl;
			break;
			
		default :
			cout << "enter a valid operation" <<endl;
			break;
	}
	

}
/*
Enter the value of a: 23
Enter the value of b: 43
Enter the operation: *
Answer is : 989
*/
