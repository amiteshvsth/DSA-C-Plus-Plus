#include <iostream>
using namespace std;

int main(){
    string s="AmiTEshRaWaL";
    for(int i=0; s[i]!='\0'; i++){
		if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32; //convert to lowercase
	}
    cout << s;
}