#include <iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char ch[], int n){
    int s = 0;
    int e= n-1;
    while (s<=e){
        swap(ch[s++],ch[e--]);
    }
    
}
int main(){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name <<endl;
    int len=getLength(name);
    cout << "Length: " << len <<endl;
    reverse(name,len);
    cout << "Your name is: " << name;
}