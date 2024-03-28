#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int balance(int n)
{
    int odd = 0, even = 0;
    while (n != 0)
    {
        int d = n % 10;
        (d % 2 == 0) ? even++ : odd++;
        n /= 10;
    }
    return (odd == even);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    int start = pow(10, t-1);
    int end = pow(10, t);
    int cntline = 0;
    for (int i = start; i <= end; i++)
    {
        if (balance(i)) 
        {
            if (cntline < 10) cntline++;
            else {
                cntline = 1;
                cout << endl;
            }
            cout << i << " ";
        }
    }
}