#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)


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
        int a[n][n];
        multiset<int> asort;
        
        forloop(i, 0, n)
        {
            forloop(j, 0, n)
            {
                cin >> a[i][j];
                asort.insert(a[i][j]);
            }
        }

        auto pos = asort.begin();
        forloop(i, 0, k-1) pos++;
        // for (int x : asort) cout << x << " ";
        cout << *pos << endl;
    }
}