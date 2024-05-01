#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second);
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
        vector<int> a(n);
        map<int, int> mp;
        forloop(i, 0, n) 
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        vector<pair<int, int>> apps(mp.begin(), mp.end());
        stable_sort(apps.begin(), apps.end(), cmp); // keep the absolute pos between elems
        for (auto it : apps)
        {
            while(it.second--)
                cout << it.first << " ";
        }
        cout << endl;
    }
}