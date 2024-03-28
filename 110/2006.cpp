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
        int n, m; 
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        //int start, end;
        int operands = min(m, n);
        int sum = 0;
        for (int i = 0; i < operands; i++)
        {
            //if (i == 0) start = (max(a[i], b[i]) == a[i]) ? 1 : 2;
            //else if (i == min(m, n) - 1)
            sum += max(a[i], b[i]);
        }
        for (int i = operands; i < max(m, n); i++)
            sum += (max(m, n) == n) ? a[i] : b[i];
        
        cout << sum << '\n';
    }
} // leave unsolved due to lack of comprehension