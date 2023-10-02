#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k, int s, int n, int e, int ans)
{
    sort(stalls.begin(), stalls.end());
    int mid = s + (e - s) / 2;
    if (s > e)
        return ans;
    if (isPossible(stalls, k, mid, n))
    {
        return aggressiveCows(stalls, k, mid + 1, n, e, mid);
    }
    else
    {
        return aggressiveCows(stalls, k, s, n, mid - 1, ans);
    }
    return ans;
}
int main()
{
    vector<int> arr = {87, 93, 51, 81, 68, 99, 59};
    int k = 4;
    int n = arr.size();
    int s = 0, e = arr[n - 1], ans = -1;
    cout << aggressiveCows(arr, k, s, n, e, ans);
}
