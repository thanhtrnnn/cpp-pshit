#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int wordscount(string s)
{
    stringstream ss(s);
    int cnt = 0;
    while (ss >> s) cnt++;
    return cnt;
}

void correct(string &s, int last)
{
    if (!last)
    {
        s[0] = (char)toupper(s[0]);
        for (auto c = s.begin() + 1; c != s.end(); c++)
            *c = (char)tolower(*c);
    }
    else {
        for (char &c : s)
            c = (char)toupper(c);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string name, ans = "";
    getline(cin, name);
    int count = wordscount(name);
    int idx = 0;

    stringstream ss(name);
    while (ss >> name)
    {
        idx++;
        (idx != count) ? correct(name, 0) : correct(name, 1);
        ans.append(name + ((idx != count - 1) ? " " : ", "));
    }

    cout << ans << endl;
}