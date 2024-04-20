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
        int k, n;
        cin >> k >> n;
        int a[n*k];
        // multiset<int> sorted;
        // forloop(i, 0, k)
        // {
        //     forloop(j, 0, n) 
        //     {
        //         cin >> a[i*n+j];
        //         sorted.insert(a[i*n+j]);
        //     }
        // }
        // for (int x : sorted) cout << x << " ";
        forloop(i, 0, k)
            forloop(j, 0, n) 
                cin >> a[i*n+j];
        sort(a, a+n*k);

        for (int x : a) cout << x << " ";
        cout << endl;
    }
}