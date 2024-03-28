#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    freopen("DATA.in", "r", stdin);
    int n, m, elem; 
    cin >> n >> m;
    set<int> s;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        mp[elem]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> elem;
        if (mp[elem] != 0) s.insert(elem);
    }

    for (int x : s) cout << x << " ";
    
}