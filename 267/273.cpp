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
        vector<int> a(n), pre(n);
        forloop(i, 0, n) 
        {
            cin >> a[i];
            pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
        }
        
        int tmp = 0, res = -1;
        for (int i = n-1; i >= 2; i--)
        {
            tmp += a[i];
            if (tmp == pre[i-2]) res = i;
        }
        // for (int x : pre) cout << x << " ";
        cout << res << endl;
    }
}