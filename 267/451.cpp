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
        int n, k, x; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        cin >> k >> x;

        int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        int l = k/2;
        forloop(i, pos-l, pos) 
        {
            if (i >= 0) cout << a[i] << " ";
            else cout << 0 << " ";
        }
        forloop(i, pos+1, pos+l+1) 
        {
            if (i < n) cout << a[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
        // cout << pos << endl;
    }
}