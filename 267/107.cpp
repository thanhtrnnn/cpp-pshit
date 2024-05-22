#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    getchar();
    while(t--)
    {
        int dung = 0;
        int idx = 0;
        string ans;

        string str;
        getline(cin, str);
        stringstream submission(str);

        while (submission >> str)
        {
            if (str == "101") ans = "ABBADCCABDCCABD";
            else if (str == "102") ans = "ACCABCDDBBCDDBB";
            else {
                if (str == ans.substr(idx++, 1)) dung++;
            }
        }
        cout << fixed << setprecision(2) << (float)dung*10/15 << endl;
    }
}