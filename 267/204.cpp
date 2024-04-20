#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

bool prime[100007];
void sievelr(int l, int r)
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= r; i++)
    {
        if (prime[i])
        {
            for (int j = max(i * i, (l + i - 1)/ i * i); j <= r; j += i)
                prime[j] = false;
        }
    }
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
        int l, r;
        cin >> l >> r;
        sievelr(l, r);
        int cnt = 0;
        forloop(i, l, r+1)
            if (prime[i]) cnt++;
        cout << cnt << endl;
    }
}