#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool palindrome(string s)
{
    if (s.length() <= 1) return false;
    string tmp = s;
    reverse(s.begin(), s.end());
    return s == tmp;
}

struct cmp 
{
    bool operator()(const string &a, const string &b)
    {
        if (a.size() == b.size()) return a > b; 
        return a.size() > b.size();
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string line;
    map<string, int, cmp> mp;
    while (getline(cin, line))
    {
        stringstream ss(line);
        while (ss >> line)
        {
            if (palindrome(line))
                mp[line]++;
        }
    }

    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
}