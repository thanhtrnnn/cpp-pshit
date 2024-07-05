#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

ll rec(vector<ll>& nums, ll idx, vector<ll>& dp)
{
    if (idx >= nums.size())
        return 0;
    if (dp[idx] != -1)
        return dp[idx];
    return dp[idx] = fmax(rec(nums, idx + 1, dp), nums[idx] + rec(nums, idx + 2, dp));
}
 
ll findMaxSum(vector<ll> &arr, ll N)
{
    vector<ll> dp(N + 1, -1);
    return rec(arr, 0, dp);
}

ll main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

	// int t; cin >> t;
	// while (t--) 
    // {
	// 	int n; cin >> n;
	// 	vector<int> M(n);
    //     forloop(i, 0, n) cin >> M[i];
    //     long int in = M[0]; // including the current elem
    //     long int ex = 0; // excluding
    //     long int ex_new; // same shit
    //     for (int i = 1; i < n; i++)
    //     {
    //         ex_new = max(in, ex);
    //         in = ex + M[i];
    //         ex = ex_new;
    //     }
    //     cout << max(in, ex) << endl;
	// }
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> a(n);
        forloop(i, 0, n) cin >> a[i];
        cout << findMaxSum(a, n) << endl;
    }
}