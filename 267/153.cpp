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
        int n;
        ll k;
        cin >> n >> k;
        
        ll s = 0;
        for (int i = 1; i <= n; i++) s += (i % k);
        cout << s << endl;
    }
}