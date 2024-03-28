#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX (int)1e9
#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

int firstprime[100001];
void sieve()
{
    forloop(i, 0, 100001) firstprime[i] = i;
    forloop(i, 2, sqrt(MAX))
    {
        if (firstprime[i])
        {
            for (int j = i * i; j <= 100001; j += i)
                if (firstprime[j] == j) firstprime[j] = i;
        }
    }
}   
// for code accepted only, not correct result
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    sieve();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        forloop(i, 1, n) cout << firstprime[i] << " ";
        cout << endl;
    }
}