#include <iostream>
using namespace std;
char toLower(char c){
    if (c>='a' && c<='z')
    {
        return c;
    } else{
        char temp = c-'A'+'a';
        return temp;
    }
    
}
bool checkPalindrome(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLower(ch[s])  != toLower(ch[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}
int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
    int len = getLength(name);
    cout << "Length: " << len << endl;
    cout << "Palindrome or not: " << checkPalindrome(name, len) <<endl;
}