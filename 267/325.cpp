#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int divi11(string n)
{
    int alt = 0;
    int idx = 0;
    for (auto it = n.begin(); it != n.end(); it++)
    {
        int i = *it - '0';
        alt += (idx % 2 == 0) ? i : -i;
        idx++;
    }
    return alt % 11 == 0;
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
        string n;
        cin >> n;
        cout << divi11(n) << endl;
    }
}