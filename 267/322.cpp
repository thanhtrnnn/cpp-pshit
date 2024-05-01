#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

string largesum(string &x, string &y)
{
    string res;
    short d, rem = 0;
    int big = max(x.length(), y.length());
    int small = min(x.length(), y.length());
    forloop(i, small, big)
    {
        (big == (int)x.length()) ? y.insert(0, 1, '0')
                                : x.insert(0, 1, '0');
    }

    forloop(i, 0, big)
    {
        d = x[big-i-1] - '0' + y[big-i-1] - '0' + rem;
        rem = d / 10;
        res.append(to_string(d % 10));
    }
    if (rem) res.append(to_string(rem));

    reverse(res.begin(), res.end());
    return res;

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
        string x, y;
        cin >> x >> y;
        cout << largesum(x, y) << endl; 
    }
}