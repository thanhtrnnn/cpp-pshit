#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool zero(ll a, ll b)
{
    if (a == 0 || b == 0) return a > b;
    else return true;
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
        vector<ll> a;
        // for (int i = 0; i < n; i++) 
        // {
        //     int x;
        //     cin >> x;
        //     a.push_back(x);
        // } 
        // sort(a.begin(), a.end(), zero);
        // for (ll x : a) cout << x << " ";
        int cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            ll x; cin >> x;
            if (x == 0) cnt++;
            else cout << x << " ";
        } 
        
        for (int i = 0; i < cnt; i++) cout << "0 ";
        cout << endl;
    }
}