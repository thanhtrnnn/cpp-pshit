#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

int x;
bool cmp(int a, int b)
{
    return (abs(x - a)) < (abs(x - b));
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
        int n; 
        cin >> n >> x;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        stable_sort(a.begin(), a.end(), cmp);
        print(a, 0, n);
        cout << el;
    }
}