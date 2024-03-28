#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int a, int b)
{
    if (a < b) swap(a, b);
    while (b != 0)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int gcd2(int a, int b)
{
    if (a == b) return a;
    else if (a > b) 
        return gcd(a-b, b);
    else return gcd(a, b-a);
}

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int x, y, z, n; 
        cin >> x >> y >> z >> n;

        ll bcnn = lcm(x, lcm(y, z));
        ll start = pow(10, n-1);
        ll ans = ((start + bcnn - 1)/ bcnn) * bcnn; // ll r = start % lcm;
        if (ans < pow(10, n)) // if (r == 0) return start;
            cout << ans << endl; // ans = start + (lcm - r);
        else cout << -1 << endl;
    }
}