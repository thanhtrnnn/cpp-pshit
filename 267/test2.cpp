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

    int n; cin >> n;
    int a[n]; // address of a = address of a[0]
    forloop(i, 0, n) cin >> a[i];
    cout << *(a+2) << endl; //pointer
    cout << a[2] << endl;
}