#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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
        set<int> positive;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] > 0) positive.insert(a[i]);
        }
        
        int ans = 1;
        for (int x : positive)
        {
            if (ans != x) break;
            else ans++;
        }
        cout << ans << endl;
    }
}