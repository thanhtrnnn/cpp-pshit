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

    int t; cin >> t;
    while(t--)
    {
        int n, q; 
        cin >> n >> q;
        vector<int> a(n), pre(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
        }

        int left, right;
        for (int i = 0; i < q; i++) 
        {
            cin >> left >> right;
            --left; --right;
            int sum = 0;
            sum = (left == 0) ? pre[right] : pre[right] - pre[left - 1];
            cout << sum << endl;
        }

    }
}