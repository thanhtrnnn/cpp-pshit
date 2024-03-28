#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long int;

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
        ll n; cin >> n;
        ll ans = 1;
        for (ll i = 2; i <= n; i++)
            ans = (ll)(ans / __gcd(ans, i) * i);
        cout << ans << endl;        
    }
}