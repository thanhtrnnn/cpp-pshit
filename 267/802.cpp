#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u128 = __uint128_t;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

bool isnumber(string s)
{
    if (s.length() > 10) return 0;
    for (char x : s)
        if (isalpha(x)) return 0;
    return 1;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    freopen("DATA.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string num;
    ll xum = 0;
    while (cin >> num)
    {
        // cout << num << endl;
        if (isnumber(num))
        {
            ll n = stoll(num);
            if (n <= INT_MAX) xum += n;
        }
    }
    cout << xum << endl;
}