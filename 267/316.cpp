#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int lucky(string s)
{
    int sum = 0;
    while (s.length() != 1)
    {
        for (char c : s) sum += (c - '0');
        if (sum == 9) return 1;
        else return lucky(to_string(sum));
    }
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
        string s; cin >> s;
        cout << lucky(s) << endl;
    }
}