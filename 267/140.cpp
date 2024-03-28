#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int perfect(ll n)
{
    vector<ll> p = {2, 3, 5, 7, 13, 17, 19};
    for (int i : p)
        if (n == (pow(2, i) - 1)*(pow(2, i-1))) return 1;
    return 0;
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
        ll n; cin >> n;
        cout << perfect(n) << endl;        
    }
}