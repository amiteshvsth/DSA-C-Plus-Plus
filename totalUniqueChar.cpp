#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int n=str.size();
    int arr[26]={0};
    int freq=0;

    for(int i=0; i<n; i++){
      int curr= str[i]-'a';
      freq=freq | (1 << curr);
    }

    int ans=0;
    while(freq!=0){
        if((freq & 1)==1) ans++;
        freq=freq >> 1;
    }
    cout << ans;
    return 0;
}