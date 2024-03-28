#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string lucky(int n)
{
    while(n != 0)
    {
        int d = n % 10;
        if (d != 0 && d != 6 && d != 8)
            return "NO";
        n /= 10;
    }
    return "YES";
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
        int n; cin >> n;
        cout << lucky(n) << endl;
    }
}