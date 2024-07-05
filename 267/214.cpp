#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

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
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        
        // int res = -1;
        multiset<int> sorted;
        forloop(i, 0, k) sorted.insert(a[i]);
        cout << *sorted.rbegin() << " ";
        forloop(i, k, n)
        {
            sorted.erase(sorted.find(a[i-k]));
            sorted.insert(a[i]);
            cout << *sorted.rbegin() << " ";
        }
        cout << el;
    }
}