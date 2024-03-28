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

    int n; cin >> n;
    vector<string> users;
    string input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        users.push_back(input);
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (users[i].find(users[j]) != string::npos && i != j) cnt++;
        }
    }
    cout << cnt << endl;
}