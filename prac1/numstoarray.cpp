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
        int n; cin >> n;
        vector<int> a(n);
        int left = INT_MIN;
        int right = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            left = max(left, a[i]);
            right = min(right, a[i]);
        }
        sort(a.begin(), a.end(), greater<int>());
        // for (int x : a) cout << x << " ";
        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            int curr = a[i+1];
            if (left != curr && left >= right)
            {
                ans += (left - curr - 1);
                left = curr;
            }
        }
        cout << ans << endl;      
    }
}