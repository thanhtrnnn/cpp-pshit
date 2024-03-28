#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        string tmp;
        stringstream ss(s);
        vector<string> v;
        while (ss >> tmp) v.push_back(tmp);
        
        int n = v.size(), odd = 0, even = 0;
        for (int i = 0; i < n; ++i){
            (stoi(v[i]) % 2 == 0) ? even++ : odd++;
        }
        
        int dec = max(odd, even);
        if ((n % 2) == (dec == odd)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}