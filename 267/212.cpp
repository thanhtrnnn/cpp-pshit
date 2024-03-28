#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod (int)1e9+7
#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define fordown(i, a, b) for (int i = (a); i >= (b); i--)

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
        ll ans = 0, exp = 1;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        fordown(i, n-1, 0)
        {
            ans += a[i] * exp;
            ans %= mod;
            exp *= x;
            exp %= mod;
        }
        cout << ans << endl;
    }
}