#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void smallestsubstr(string s1, string s2)
{
    int pos[500] = {};
    int cnt = 0, start, len = INT_MAX;
    forloop(i, 0, (int)s2.size())
    {
        if (pos[s2[i]] == 0) cnt++;
        pos[s2[i]]++;
    }
    
    int j = 0;
    forloop(i, 0, (int)s1.size())
    {
        pos[s1[i]]--;
        if (pos[s1[i]] == 0) cnt--;
        if (cnt == 0)
        {
            while (cnt == 0)
            {
                if (len > i - j + 1)
                {
                    len = i - j + 1;
                    start = j;
                }
                pos[s1[j]]++;
                if (pos[s1[j]] > 0) cnt++;
                j++;
            }
        }
    }

    (len != INT_MAX) ? cout << s1.substr(start, len) << endl
                    : cout << "-1" << endl;
}

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
        string s1, s2;
        cin >> s1 >> s2;
        smallestsubstr(s1, s2);        
    }
}   