#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        char a;
        cin >> a;
        char ans = (a <= 'Z') ? tolower(a) : toupper(a);
        cout << ans << endl;
    }
}