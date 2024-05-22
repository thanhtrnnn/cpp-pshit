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
        int n, k; 
        cin >> n >> k;
        int a[n];
        forloop(i, 0, n) cin >> a[i];
        sort(a, a + n);
        
        ll cnt = 0;
        forloop(i, 0, n)
        {
            int pos = lower_bound(a + i + 1, a + n, k + a[i]) - (a + i);
            cnt += (ll)(pos - 1);
        }
        cout << cnt << endl;
    }
}