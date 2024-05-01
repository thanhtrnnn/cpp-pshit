#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int longestdist(vector<int> &a, int n)
{
    int res = 0;
    forloop(i, 0, n)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if (j - i <= res) break;
            if (a[j] >= a[i])
                res = max(res, j-i);
        }
    }
    return res;
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
        int n; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        cout << longestdist(a, n) << endl;
    }
}