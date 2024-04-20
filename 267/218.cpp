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
        int a[n];
        forloop(i, 0, n) cin >> a[i];
        sort(a, a+n);

        int x = a[n-1] - a[0];
        int res = 0;
        forloop(i, 1, x+1)
        {
            int check = 1;
            forloop(j, 1, n)
            {
                if ((a[j] - a[0]) % i != 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check) res++;
        }
        cout << res << endl;
    }
}