#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)


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
        int a[n][n];
        map<int, int> mp;
        
        forloop(i, 0, n)
        {
            set<int> tmp;
            forloop(j, 0, n)
            {
                cin >> a[i][j];
                tmp.insert(a[i][j]);
            }
            for (int x : tmp) mp[x]++;
        }

        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second == n) cnt++;
            // cout << it.first << " " << it.second << endl;
        }
        cout << cnt << endl;
    }
}