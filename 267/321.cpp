#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

string largediff(string &x, string &y)
{
    string res;
    short d, rem = 0;
    int big = max(x.length(), y.length());
    int small = min(x.length(), y.length());
    forloop(i, small, big)
    {
        (big == (int)x.length()) ? y.insert(0, 1, '0')
                                : x.insert(0, 1, '0');
    }
    if (x < y) swap(x, y);
    // cout << x << " " << y << endl;
    forloop(i, 0, big)
    {
        if (rem == 1)
        {
            if (x[big-i-1] <= y[big-i-1])
            {
                d = x[big-i-1] - '0' + 10 - rem - (y[big-i-1] - '0');
                rem = 1;
            }
            else {
                d = x[big-i-1] - '0' - rem - (y[big-i-1] - '0');
                rem = 0;
            }
        }
        else {
            if (x[big-i-1] < y[big-i-1])
            {
                d = x[big-i-1] - '0' + 10 - (y[big-i-1] - '0');
                rem = 1;
            }
            else {
                d = x[big-i-1] - '0' - (y[big-i-1] - '0');
            }
        }    
        res.append(to_string(d % 10));
    }
    // thanks to jotting down

    reverse(res.begin(), res.end());
    return res;

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
        string x, y;
        cin >> x >> y;
        cout << largediff(x, y) << endl; 
    }
}