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

    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        unordered_set<char> diff, dup;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (diff.find(*it) == diff.end()) diff.insert(*it);
            else dup.insert(*it);
        }
        
        for (char c : dup) 
        {
            auto pos = s.find(c);
            while (pos != string::npos)
            {
                s.erase(pos, 1);
                pos = s.find(c);
            }
        }
        cout << s << endl;      
    }
}