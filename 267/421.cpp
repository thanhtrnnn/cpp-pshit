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
        vector<ll> a(n);
        forloop(i, 0, n) cin >> a[i];
        forloop(i, 0, n)
        {
            auto it = find(a.begin(), a.end(), i);
            if (it == a.end()) cout << -1;
            else cout << i;
            if (i != n-1) cout << " ";
        }
        // for (int x : a) cout << x << " ";
        cout << endl;
    }
}