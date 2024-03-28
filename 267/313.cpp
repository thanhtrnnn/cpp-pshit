#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string main, sub;
    getline(cin, main);
    getline(cin, sub);

    string ans = "";
    stringstream ss(main);
    while (ss >> main)
        if (main != sub) ans.append(main + " ");

    cout << ans << endl;
}