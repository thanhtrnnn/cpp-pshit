#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y+1) cout << a[i] << " "
#define el "\n"

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string b; cin >> b;
        map<char, int> mp;
        string tmp = "";
        for (char x : b) mp[x]++;
        for (auto x : mp) tmp += x.first;
        int po = tmp.length();
        forloop(i, 0, po) mp[tmp[i]] = tmp[po - i - 1]; 
        forloop(i, 0, n) b[i] = mp[b[i]];
        cout << b << el; 
    }
}