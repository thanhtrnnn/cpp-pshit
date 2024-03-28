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

    int t; cin >> t;
    for (int z = 1; z <= t; z++)
    {
        int lena, lenb; 
        int pos;
        cin >> lena >> lenb >> pos;    
        vector<int> a(lena+lenb), b(lenb);
        for (int i = 0; i < lena; i++) cin >> a[i];
        for (int i = 0; i < lenb; i++) cin >> b[i];

        a.insert(a.begin() + pos, b.begin(), b.end());
        cout << "Test " << z << ":" << endl;   
        for (int x : a) 
            if (x != 0) cout << x << " ";
        cout << endl;
    }
}