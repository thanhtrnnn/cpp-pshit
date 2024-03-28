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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = abs(a - b);
	ll y = abs(b - c);
	ll z = abs(c - d);
	cout << __gcd(__gcd(x, y), z) << endl;
}