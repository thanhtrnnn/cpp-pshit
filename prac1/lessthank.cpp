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
        int n, k; cin >> n >> k;
        int d = 0, cnt = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] <= k) d++;
        }

        for (int i = 0; i < d; i++)
			if(a[i] <= k) cnt++;

		int res = cnt;
		for (int i = d; i < n; i++)
        {
			if(a[i - d] <= k) cnt--;
			if(a[i] <= k) cnt++;
			res = max(res, cnt);
		}
		cout << d - res << endl;
    }
}