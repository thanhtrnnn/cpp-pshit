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
        
        int end = n-1, start = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) cout << a[end--] << " ";
            else cout << a[start++] << " ";
        }
        cout << endl;
    }
}