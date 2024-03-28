#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int kthprimediv(int n, int k)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        if (cnt == k) return 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            cnt++;
            if (cnt == k) return i;
            n /= i;
        }
    }
    cnt = (k == cnt + 1 && n > 1) ? n : -1;
    return cnt;
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
        int n, k; 
        cin >> n >> k;
        cout << kthprimediv(n, k) << endl;
    }
}