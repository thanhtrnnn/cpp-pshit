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
        int n; cin >> n;
        vector<int> a(n);
        int zeros = 0;
        forloop(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 0) zeros++;
            else {
                if (i != 0 && a[i] == a[i-1])
                {
                    zeros++;    
                    a[i-1] *= 2;
                    a[i] = 0;
                }
            }
        }
        // sort(a.begin(), a.end(), cmp);
        for (int x : a) 
            if (x != 0) cout << x << " ";
        forloop(i, 0, zeros) cout << "0 ";
        cout << endl;
    }
}