#include<iostream>
using namespace std;

int main(){
	int a=4;
	int b=6;
	
	cout<<"a&b = "<< (a&b)<<endl;	
	cout<<"a|b = "<< (a|b)<<endl;	
	cout<<"~a = "<< (~a)<<endl;	
	cout<<"a^b = "<< (a^b)<<endl;	
	
	cout<< "17>>1 = " << (17>>1) <<endl;
	cout<< "17>>2 = " << (17>>2) <<endl;
	cout<< "19<<1 = " << (19<<1) <<endl;
	cout<< "21<<2 = " << (21<<2) <<endl;
	
	int i=7;
	cout << "initially i = 0" <<endl;
	cout <<"pre-increment " <<(++i) <<endl;
	// 8
	cout <<"post-increment " << (i++) <<endl;
	// 8 , i = 9;
	cout <<"pre-decrement " << (i--) <<endl;
	// 9, i = 8
	cout <<"post-decrement " << (--i) <<endl;
	// 7, i=7;
}

/*
a&b = 4
a|b = 6
~a = -5
a^b = 2
17>>1 = 8
17>>2 = 4
19<<1 = 38
21<<2 = 84
initially i = 0
pre-increment 8
post-increment 8
pre-decrement 9
post-decrement 7

*/
