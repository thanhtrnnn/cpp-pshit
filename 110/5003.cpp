#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    freopen("DATA.in", "r", stdin);
    ios::sync_with_stdio(false); cin.tie(0);

    map<int, int> apps;
    string input;
    while(getline(cin, input))
    {
        stringstream ss(input);
        while(ss >> input) 
        {
            int num = stoi(input);
            apps[num]++;
        }
    }

    for (auto it = apps.begin(); it != apps.end(); ++it)
        cout << it->first << " " << it->second << endl;
}