#include<iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    // (1 << i) = pow(2, i)
    for (int i = 0; i < sizeof(int) * 8; i++) { //we can also use 32 instead of sizeof(int)*8 as int is of 4 bytes
        if (n & (1 << i)) // if 1 then count is incremented
            count++;
    } 
    return count;		
}

int main(){
	int a;
	cout<<"Enter value of a: ";
	cin>>a;
	
	int b;
	cout<<"Enter value of b: ";
	cin>>b;
		
	cout << "set bits are : " << countSetBits(a) +countSetBits(b);
}
/*
Enter value of a: 45
Enter value of b: 2
set bits are : 5
*/
