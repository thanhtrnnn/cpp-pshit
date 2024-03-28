#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    freopen("DATA.in", "r", stdin);
    ios::sync_with_stdio(false); cin.tie(0);

    map<int, int> apps;
    int in;
    while (cin >> in) apps[in]++;

    for (auto it : apps)
        cout << it.first << " " << it.second << endl;
}