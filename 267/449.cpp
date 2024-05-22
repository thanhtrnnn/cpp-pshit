#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        map<int, int> pos;
        forloop(i, 0, n) 
        {
            cin >> a[i];
            pos[a[i]]++;
        }
        // sort(a.begin(), a.end());
        // int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
        // cout << pos << endl;
        bool valid = false;
        // if (pos != n)
        // {
        //     if (pos == 0) 
        //     if (find(a.begin(), pos + a.begin(), a[pos] - x) != pos + a.begin())
        //         valid = true;
        // }
        forloop(i, 0, n)
        {
            if (pos[abs(x + i)] > 0)
            {
                valid = true;
                break;
            }
        }
        (valid) ? cout << "1" << endl
                : cout << "-1" << endl;
    }
}