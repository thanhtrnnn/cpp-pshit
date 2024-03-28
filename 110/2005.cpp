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
        vector<int> maxdiff(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            maxdiff[i] = 0;
            for (int j = 0; j < i; j++) 
                maxdiff[i] = max(a[i] - a[j], maxdiff[i]);
        }

        int ans = -1;
        for (auto i = maxdiff.begin(); i != maxdiff.end(); ++i)
            if (*i != 0) ans = max(ans, *i);
        
        cout << ans << endl;
    }
}