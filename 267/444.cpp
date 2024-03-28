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
        int n, x; 
        cin >> n >> x;
        vector<int> a(n);
        int pivot = INT_MIN;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            pivot = (a[i] > pivot) ? i : pivot;
        }

        int idx = (x > a[0] && x < a[pivot]) ? -1 : 1; 
        while (a[pivot] != x) pivot += idx;
        cout << ++pivot << endl;
    }
}