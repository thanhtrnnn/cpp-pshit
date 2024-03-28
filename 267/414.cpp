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
    while(t--)
    {
        int n; cin >> n;
        set<char> digits;
        forloop(i, 0, n) 
        {
            string s; cin >> s;
            for (char x : s) digits.insert(x);
        }
        for (char x : digits) cout << x << " ";
        cout << endl;        
    }
}