#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

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
        string s; cin >> s;
        string tmp = "";
        ll res = 0;
        forloop(i, 0, (int)s.size()+1)
        {
            if (isdigit(s[i]))
            {
                tmp += s[i];
                forloop(j, i+1, (int)s.size()+1)
                {
                    if (isdigit(s[j])) tmp += s[j];
                    else {
                        res += stoll(tmp);
                        i += tmp.size();
                        tmp = "";
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
}