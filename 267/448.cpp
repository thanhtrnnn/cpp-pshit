#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int freq(vector<int> a, int x)
{
    map<int, int> mp;
    for (int i : a) mp[i]++;
    int cnt = (mp[x] != 0) ? mp[x] : -1;
    return cnt;
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
        int n, x; 
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << freq(a, x) << endl;
    }
}