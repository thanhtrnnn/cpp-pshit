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
        string s;
        multiset<char> alpha;
        int sum = 0;
        cin >> s;
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z') alpha.insert(c);
            else sum += (c - '0');
        }
        for (char x : alpha) cout << x;
        cout << sum << endl;
    }
}