#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

typedef struct mlist
{
    int n;
    int nodes[10000];
}
mlist;

void appearance(mlist &x)
{
    map<int, int> mp;
    forloop(i, 0, x.n) mp[x.nodes[i]]++;
    forloop(i, 0, x.n)
    {
        if (mp[x.nodes[i]] != 0)
        {
            cout << x.nodes[i] << " " << mp[x.nodes[i]] << endl;
            mp[x.nodes[i]] = 0;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    mlist ds;
    int x, i = 0;
    while (cin >> x)
    {
        ds.nodes[i] = x;
        i++;
    }
    ds.n = i;
    appearance(ds);
}