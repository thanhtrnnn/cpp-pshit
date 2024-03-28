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
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int min = 1e9;
        for (auto x = a.begin(); x != a.end()-1; ++x)
        {
            if (*(x+1) - *x <= min)
                min = (*(x+1) - *x);
        }
        cout << min << endl;
    }
}