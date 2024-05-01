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
        int n = s.length();
        // int idx[n + 5] = {};
        // int res = 0;
        // while (pos != string::npos)
        // {
        //     int cnt = 0;
        //     forloop(i, pos, n)
        //     {
        //         if (idx[i] == 0 && cnt < 3) 
        //         {
        //             idx[i]++;
        //             cnt++;
        //         }
        //         if (cnt == 3) break;
        //     }
        //     s.erase(pos, 3);
        //     pos = s.find("100");
        // }

        // // bool check = true;
        // for (int x : idx) cout << x << " ";
        // int tmp = 0;
        // forloop(i, 0, n)
        // {
        //     while (idx[i] == 1)
        //     {
        //         tmp++;
        //         i++;
        //     }
        //     if (idx[i] == 0) res = max(res, tmp);
        // }
        // // cout << s << endl;
		int pos = s.find("100");
		while (pos != -1)
        {
			s.erase(pos, 3);
			pos = s.find("100");
		}
		if (n - s.size() != 0) cout << n - s.size() << endl;
    }
}