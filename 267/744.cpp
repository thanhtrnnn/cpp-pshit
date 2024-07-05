#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

ll factorial[25];
void init()
{
	factorial[0] = 1;
	forloop(i, 1, 21)
		factorial[i] = factorial[i-1] * i;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    init();
    int t; cin >> t;
    while(t--)
    {
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        ll res = 0;
        forloop(i, r, n - b - g + 1) // count r
        {
            forloop(j, b, n - i - g + 1) // count b
            {
                int k = n - i - j; // remaining g
                res += (factorial[n]) / (factorial[i] * factorial[j] * factorial[k]); // combination
            }
        }
        cout << res << el;
    }
}