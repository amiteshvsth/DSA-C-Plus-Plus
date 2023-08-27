#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int row=1;
	char ch='A';
	while(row<=n){
	 int col = 1;
	 while(col<=n){
	 	cout<< ch;
	 	col=col+1;
		 ch++;	 	
	 }	
	 cout <<endl;
	 row =row+1;
	}	
}

/*
Enter value of n: 12
ABCDEFGHIJKL
MNOPQRSTUVWX
YZ[\]^_`abcd
efghijklmnop
qrstuvwxyz{|
}~¦Çüéâäàåçê
ëèïîìÄÅÉæÆôö
òûùÿÖÜ¢£¥Pƒá
íóúñÑªº¿¬¬½¼
¡«»¦¦¦¦¦¦¦++
¦¦++++++--+-
+¦¦++--¦-+--

*/
