#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;
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
        int p[n];
        for (int i = 0; i < n; i++) cin >> p[i];

        ll val = 0, exp = 1;
        for (int i = n-1; i >= 0; i--)
        {
            val += p[i] * exp;
            val %= mod;
            exp *= x;
            exp %= mod;
        }
        cout << val << endl;
    }
}