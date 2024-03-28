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
        set<int> mp;
        int ans = -1, mark = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (!mp.insert(a[i]).second && !mark) 
            {
                ans = a[i];
                mark = 1;
            }
            else mp.insert(a[i]);
        }
        cout << ans << endl;
    }
}