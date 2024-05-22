#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

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
        int n, m; 
        cin >> n >> m;
        vector<int> a(n), b(m);
        map<int, int> mp;
        forloop(i, 0, n) 
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        forloop(i, 0, m) 
        {
            cin >> b[i];
            if (mp[b[i]] != 0) mp[b[i]]++;
        }
        for (auto it : mp) cout << it.first << " ";
        cout << endl;
        for (auto it : mp) 
            if (it.second == 2) cout << it.first << " ";
        cout << endl;
    }
}