#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

bool check(string s){
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return true;
    if (s[5] != '6' && s[5] != '8'){
        for (int i = 5; i < 10; i++){
            if (i == 8) continue;
            if (i != 7){
                if (s[i] - '0' >= s[i + 1] - '0') return false;
            }
            else{
                if (s[i] - '0' >= s[i + 2] - '0') return false;
            }
        }
        return true;
    }
    for (int i = 5; i <= 10; i++){
        if (i == 8) continue;
        else{
            if (s[i] != '6' && s[i] != '8') return false;
        }
    }
    return true;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t; cin >> t;
    // file.ignore();
    while(t--)
    {
        string s; cin >> s;
        // cout << s << endl;
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}