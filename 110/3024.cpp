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

    string n;
    cin >> n;

    int cnt = 0;
    int len = n.length();
    string ans = "NO";
    for (int i = 1; i < len; i++)
    {
        if (n.length() <= 7) break;
        int j = i;
        if (n[j] == n[j-1])
        {
            cnt = 1;
            while(n[j] == n[i] && j < len) 
            {
                cnt++;
                j++;
                if (cnt == 7) 
                {
                    ans = "YES";
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}