#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;
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
        ll product = 1;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            product *= a[i];
            product %= mod;
        }

        int ucln = a[0];
        for (int i = 1; i < n; i++) ucln = __gcd(ucln, a[i]);
        ll ans = product;
        for (int z = 1; z < ucln; z++)
        {
            ans *= (ucln == 1) ? 1 : product;
            ans %= mod;
        }

        cout << ans << endl;
    }
}