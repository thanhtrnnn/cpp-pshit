#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

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
        string s; cin >> s;
        map<char, int> kitu;
        for (char x : s) kitu[x]++;
        ll res = s.size();
        for (auto it : kitu)
            res += it.second * (it.second - 1) / 2;
        cout << res << endl;
    }
}