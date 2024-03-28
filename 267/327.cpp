#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string div5(string s)
{
    int state = 0;
    for (char c : s)
    {
        int d = c - '0';
        state = 2*state + d;
        state %= 5;
    }

    string ans = (state % 5 == 0) ? "Yes" : "No";
    return ans;
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
        string n;
        getline(cin, n);
        cout << div5(n) << endl;        
    }
}