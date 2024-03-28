#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string nicecheck(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (rev != s) return "NO";

    for (char c : s)
        if ((c - '0') % 2 != 0) return "NO";
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
    cin.ignore();
    while(t--)
    {
        string num;
        getline(cin, num);
        cout << nicecheck(num) << endl;
    }
}