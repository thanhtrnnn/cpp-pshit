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

    int n; cin >> n;
    cin.ignore();
    map<string, int> mp;
    for (int z = 0; z < n; z++)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }

    cout << mp.size() << endl;
}