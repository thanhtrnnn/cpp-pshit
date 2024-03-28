#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string lowercase(string s)
{
    for (char &x : s)
        x = (char)tolower(x);
    return s;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string filename;
    cin >> filename;

    int dot = filename.find(".");
    string ans = (lowercase(filename.substr(dot+1)) == "py") ? "yes" : "no";
    cout << ans << endl;
}