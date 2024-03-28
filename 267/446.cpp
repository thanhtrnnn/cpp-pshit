#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int zero(int a, int b)
{
    return (abs(a) < abs(b));
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
        for (int i = 0; i < n; i++) cin >> a[i];
        
        // sort(a.begin(), a.end());
        // int l = 0, r = n-1;
        // int min = INT_MAX;
        // while(l < r) 
        // {
        //     int sum = a[l] + a[r];
        //     if (abs(sum) < abs(min)) min = sum;
        //     if (sum < 0) l++;
        //     else r--;
        // }
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
                if (abs(a[i] + a[j]) < abs(min)) min = a[i] + a[j];
        }

        cout << min << endl;

    }
}