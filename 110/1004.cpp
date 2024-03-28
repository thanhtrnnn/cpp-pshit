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
    
    const string vn = "084";
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        auto idx = s.find(vn);
        while (idx != string::npos) 
        {
            s.erase(idx, 3);
            idx = s.find(vn);
        }
        cout << s << endl;
    }
}