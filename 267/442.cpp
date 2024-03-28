#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int test(vector<int> m, int n, int k) 
{
	int l = 0, r = n - 1;
	while (l <= r) 
    {
		int a = (l + r) / 2;
		if (m[a] == k) return 1;
		else if (k > m[a]) l = a + 1;
		else r = a - 1;
	}
	return -1;
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
        int n, x; 
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        cout << test(a, n, x) << endl;
    }
} 