#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int twoSum(vector<int> &a, int k)
{
    int n = a.size();
    unordered_multimap<int, int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int pot = k - a[i];
        if (nums.count(pot))
            nums.insert(make_pair(a[i], nums.count(pot)));
        else nums.insert(make_pair(a[i], 0));
    }

    int ans = 0;
    for (auto it : nums) ans += it.second;
    return ans;
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
        int n, k; 
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++) 
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        cout << twoSum(a, k) << endl;
    }
}