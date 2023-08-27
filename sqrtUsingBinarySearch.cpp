#include <iostream>
using namespace std;

long long int binarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == n){
            return mid;
        }
        if (sq < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp){
    double factor = 1;
    double ans= temp;
    for (int i=0; i<precision; i++){
        factor/=10;
        for (double j = ans; j*j<n; j+=factor){
           ans = j;
        } 
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int temp = binarySearch(n);

    cout << "Sqrt of " << n << " is : " << morePrecision(n,3,temp);
}