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

    unordered_multimap<char, char> keyrule = {
        {'a', '2'},
        {'b', '2'},
        {'c', '2'},
        {'d', '3'},
        {'e', '3'},
        {'f', '3'},
        {'g', '4'},
        {'h', '4'},
        {'i', '4'},
        {'j', '5'},
        {'k', '5'},
        {'l', '5'},
        {'m', '6'},
        {'n', '6'},
        {'o', '6'},
        {'p', '7'},
        {'q', '7'},
        {'r', '7'},
        {'s', '7'},
        {'t', '8'},
        {'u', '8'},
        {'v', '8'},
        {'w', '9'},
        {'x', '9'},
        {'y', '9'},
        {'z', '9'}
    };
        
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        lowercase(s);
        string conv = "", tmp;
        for (char c : s)
        {
            auto it = keyrule.find(c);
            conv += (*it).second;
        }
        tmp = conv;
        reverse(conv.begin(), conv.end());
        // cout << conv << " " << tmp << endl;
        string ans = (conv == tmp) ? "YES" : "NO";
        cout << ans << endl;
    }
}