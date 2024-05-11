#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

ll maxSubArraySum(vector<int> a, int size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) 
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        // int high = INT_MIN, lo = INT_MAX;
        // forloop(i, 0, n) 
        // {
        //     cin >> a[i];
        //     pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i]; 
        //     high = max(pre[i], high);
        //     lo = min(pre[i], lo);
        // }
        
        // // print(pre);
        // int res = INT_MIN;
        // if (lo == pre[n-1] || lo == pre[0]) res = high;
        // else if (find(pre.begin(), pre.end(), lo) - pre.begin() < find(pre.begin(), pre.end(), high) - pre.begin())
        //     res = high - lo;
        // res = max(res, pre[n-1]);
        cout << maxSubArraySum(a, n) << endl;
    }
}