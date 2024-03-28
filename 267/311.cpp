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

    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        int pairs = 0, dups = 0;
        forloop(i, 0, (int)s.length()-1)
        {
            if (s[i] == s[i+1]) dups++;
            pairs++;
        }
        cout << (dups <= pairs/2) << endl;
    }
}