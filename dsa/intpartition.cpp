#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

bool ok;
void next(vector<int> &a, int &cnt)
{
    int i = cnt;
    while (i >= 1 && a[i] == 1) --i; // 4 2 1 1

    if (i == 0) ok = false;
    else {
        a[i]--; // a[2] = 1;
        int tmp = cnt - i + 1; // 4-2+1 = 3
        cnt = i; // 2
        int q = tmp / a[i]; // 3
        int r = tmp % a[i]; // 0

        if (q)
        {
            forloop(j, 1, q)
            {
                ++cnt;
                a[cnt] = a[i]; // write a[i] q times
            }
        }
        if (r) a[++cnt] = r;
    } // 4 1 1 1 1
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
        vector<int> a(n+5, 0);

        int cnt = 1;
        a[1] = n; // init
        ok = true;

        while (ok)
        {
            forloop(i, 1, cnt)
                cout << a[i] << " ";
            cout << endl;
            next(a, cnt);
        }
    }
}