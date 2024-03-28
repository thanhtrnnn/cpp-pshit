#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int lucky(string s)
{
    for (char x : s)
        if (x != '6' && x != '8') return 0;
    return 1;
}

int increase(string s)
{
    // int last = n % 10;
    // while (n != 0)
    // {
    //     n /= 10;
    //     int curr = n % 10;
    //     if (last <= curr) return 0;
    //     last = curr;
    // }
    // return 1;
    int first = s[0];
    for (int i = 1; i < (int)s.length(); i++)
    {
        if (first >= s[i]) return 0;
        first = s[i];
    }
    return 1;
}

int combo(string s)
{
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

string getnum(string s)
{
    string curr = "";
    for (int i = 5; i < (int)s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            curr += s[i];
    }
    return curr;
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
        string s;
        getline(cin, s);
        string plate = getnum(s);
        string ans = (lucky(plate) || increase(plate) || combo(plate))
                ? "YES" : "NO";
        cout << ans << endl;
    }
}