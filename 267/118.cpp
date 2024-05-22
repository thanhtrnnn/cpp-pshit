#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int sphenic(int n)
{
    int num = 2;
    set<int> fact;
    while (n > 1)
    {
        if (n % num == 0)
        {
            if (!fact.insert(num).second) return 0;
            else fact.insert(num);
            n /= num;
        }
        else num++;
    }

    return (fact.size() == 3);
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
        int n; cin >> n;
        cout << sphenic(n) << endl;
    }
}