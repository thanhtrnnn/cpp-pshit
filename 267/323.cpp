#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

bool cmp(string a, string b)
{
    if (a.length() < 13) return stoll(a) < stoll(b);
    else if (a.length() == 13 && b.length() == 13) return 0;
    else return 0;
}

string largediv(string n, string m)
{
    if (n == m) return "0";
    else if (cmp(n, m)) return n;
    string res = "";
    string tmp = "";
    
    for (char i : n)
    {
        if (tmp == "" || cmp(tmp, m)) tmp += i;
        else {
            tmp = to_string(stoll(tmp) % stoll(m));
            tmp += i;
        }
    }
    res = to_string(stoll(tmp) % stoll(m));
    return res;
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
        string n, m;
        cin >> n >> m;
        cout << largediv(n, m) << endl;
    }
}

/*
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int res = 0;
        string a; cin >> a;
        ll mod; cin >> mod;
        for (int i = 0; i < a.length();i++){
            res = res * 10 + (a[i] - '0') % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}*/