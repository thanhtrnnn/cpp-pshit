#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(int a, int b)
{
    return __gcd(a, b);
}

ll lcm(int a, int b)
{
    return (ll)(a / gcd(a,b) * b);
}

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
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b)  << endl;
    }
}