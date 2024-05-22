#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX (int)10000
#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

vector<int> firstprime(MAX + 1);
void sieve()
{
    forloop(i, 0, MAX) firstprime[i] = i;
    forloop(i, 2, sqrt(MAX))
    {
        if (firstprime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                if (firstprime[j] == j) firstprime[j] = i;
        }
        // cout << firstprime[i] << " ";
    }
}   

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