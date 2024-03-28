#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int pangram(string s, int k)
{
    map<char, int> mp;
    for (char c : s) mp[c]++;

    int cnt = 0;
    for (auto it : mp)
    {
        // cout << it.first << " " << it.second << endl;
        if (it.first >= 'a' && it.first <= 'z') cnt++;
    }
    return (k >= (26 - cnt));
}

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
        cin.ignore();
        string s;
        getline(cin, s);
        int k; cin >> k;
        cout << pangram(s, k) << endl;        
    }
}