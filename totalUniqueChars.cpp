#include <bits/stdc++.h>
using namespace std;

int countDistinct(string s)
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int n = s.length(); 
	int countArray[26] = {0};


	for (int i = 0; i < n; i++) {
        // calculating the index of current element 
		int index = s[i] - 'a';
        // initializing the index to 1 previously all were 0's
		countArray[index]++;
	}

    // now initializing a count variable which will store the count of all the elements in 26 wala array
    // whose value is 1
	int count = 0; 
	
    // traversing the 26 wala array
	for (int i = 0; i < 26; i++) {
        // jha pr bhi value 1 mil gyi
		if (countArray[i] == 1) {
            // vha count badha do
			count++;
		}
	}
    // last me total count likh do
	return count;
}

int main() {
	string s = "geeksforgeeks"; // string taken
	cout << countDistinct(s) << endl; // Print answer
	return 0;
}
