#include <bits/stdc++.h>
using namespace std;

void reversestr(string s)
{
    vector<string> words;
    stringstream ss(s);
    while (ss >> s) words.push_back(s);

    for (auto it = words.rbegin(); it != words.rend(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        reversestr(s);
    }
}