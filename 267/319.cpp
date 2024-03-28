#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int sumdigits(int m, int s)
{
    if (s < 1 || s > 9*m) 
    {
        cout << "-1 -1" << endl;
        return -1;
    }

    vector<int> min, max;
    int lo = 1, hi = 9;
    int tmp = s;
    for (int i = 0; i < m; i++)
    {
        while (s - lo > 9*(m-i-1)) lo++;
        while (tmp < hi) hi--;
        min.push_back(lo); 
        max.push_back(hi);
        s -= lo; tmp -= hi;
        lo = 0;
    }
    for (int x : min) cout << x;
    cout << " ";
    for (int x : max) cout << x;
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int m, s;
    cin >> m >> s;
    sumdigits(m, s);
}