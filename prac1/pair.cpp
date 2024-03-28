#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	while(t--)
    {
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for(int i =0; i < n; i++) cin >> a[i];

		sort(a, a + n);
		ll count = 0;
		int l = 0, r = n - 1;
		while (l < r)
        {
			if(a[l] + a[r] >= k)
            {
				count += (r - l);
				r--;
			} else l++;
		}
		cout << count << endl;
	}
}
