#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

string solve(string s)
{
    int n = s.length();
    for (int i = n-1; i > 0; i--)
    {
        if (s[i] < s[i-1]) // 8194567
        {
            int tmp = i;
            for (int j = i+1; j < n; j++)
                if (s[j] < s[i-1] && s[tmp] < s[j]) 
                    tmp = j;
            swap(s[tmp], s[i-1]);
            return s;
        }   
    }
    return "-1";
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
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}