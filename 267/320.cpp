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
        string s; cin >> s;
        unordered_set<char> digits;
        bool valid = true;
        for (char c : s)
        {
            if (isalpha(c) || s[0] == '0')
            {
                valid = false;
                break;
            }
            else digits.insert(c);
        }
        string ans = ((!valid) ? "INVALID" : (digits.size() == 10) ? "YES" : "NO");
        cout << ans << endl;
    }
}