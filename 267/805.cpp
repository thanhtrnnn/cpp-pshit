#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string lowercase(string &s)
{
    for (char &c : s) // range-based
        c = (char)tolower(c);
    return s;
}

int main()
{
    ifstream file1, file2;
    file1.open("DATA1.in");
    file2.open("DATA2.in");

    map<string, int> mp;
    set<string> inter;
    string s;
    while (getline(file1, s))
    {
        lowercase(s);
        stringstream ss1(s);
        while (ss1 >> s) mp[s]++;
    }
    while (getline(file2, s))
    {
        lowercase(s);
        stringstream ss2(s);
        while (ss2 >> s) 
            if (mp[s]) inter.insert(s);
    }

    for (auto it : mp) cout << it.first << " ";
    cout << endl;
    for (auto x : inter) cout << x << " ";
}