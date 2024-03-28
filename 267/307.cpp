#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

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
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        map<string, int> diffs1;
        stringstream ss1(s1);
        while (ss1 >> s1) diffs1[s1]++;

        stringstream ss2(s2);
        while (ss2 >> s2)
            if (diffs1.count(s2)) diffs1[s2] = 0;
        
        for (auto x : diffs1) 
            if (x.second != 0) cout << x.first << " ";
        cout << endl;
    }
}