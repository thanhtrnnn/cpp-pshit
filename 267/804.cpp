#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void lowercase(string &s)
{
    for (char &c : s) c = tolower(c);
}

int main()
{
    freopen("VANBAN.in", "r", stdin);
    string s;
    map<string, int> mp;
    while (cin >> s) 
    {
        lowercase(s);
        mp[s]++;
    }
    for (auto it : mp)
        if (it.second > 0) cout << it.first << endl;
}