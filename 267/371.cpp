#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void lowercase(string &s)
{
    for (char &x : s)
        x = (char)tolower(x);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string s; cin >> s;
    lowercase(s);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        char c = *it;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            s.erase(it);
            --it;
        }
        else cout << '.' << c;
    }
}