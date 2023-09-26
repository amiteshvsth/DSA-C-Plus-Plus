#include<bits/stdc++.h>
using namespace std;

//To hold the prime numbers <=sqrt(n)
vector<int> primes;

// get all primes <=x where x=sqrt(n)
void simpleSieve(int x){
    vector<bool> prime(x+1,true);
    //as 0 and 1 are not primes
    prime[0]=prime[1]=false;

// Sieve for filtering out the primes <=x
    for(int i=2; i<=x; i++){
        if(prime[i]){
            // Cancelling out all the multiples of i
            for (int j = i*i; j <=x; j+=i)
            {
                prime[j]=false;
            }  
        }
    }
    //Adding the primes into primes vector
    for(int i=2; i<=x; i++){
        if(prime[i]) primes.push_back(i);
    }
}

void segmentedSieve(int l, int r, vector<int> &ans){
    //creating a dummy vector of size r-l+1 so that we do not need to create a vector of larger size
    vector<int> isPrime(r-l+1, true);
    //looping over the primes
    for(int p: primes){
        //Choosing the first multiple of p>=l

        //for even case
        int s=l/p*p;

        //for odd case
        if(s<l) s+=p;

        //cancelling out the factors of a
        for (int i = s; i <=r; i+=p){
           isPrime[i-l]=false;
        } 
    }

    //Append primes in range [l,r] in ans
    for (int i = 0; i < isPrime.size(); i++){
     if(isPrime[i]) ans.push_back(i+l);
    }
}

int main(){
    primes.clear();

    int n;
    cin>>n;

    simpleSieve((int)(floor(sqrt(n))));
    vector<int> ans;

    int updateVal=floor(sqrt(n));
    for (int l = 2; l < n; l+=updateVal){
        int r= min(l+updateVal-1, n-1);
        segmentedSieve(l,r,ans);
    }
    //printing all the primes < n
    for(int p:ans){
        cout << p << " ";
    }
    cout << endl;    
}
