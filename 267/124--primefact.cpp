#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void factorization(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int exp = 0;
        while (n % i == 0)
        {
            exp++;
            n /= i;
        }
        if (exp) cout << i << " " << exp << endl;
    }
    if (n > 1) cout << n << " 1";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    factorization(n);
}