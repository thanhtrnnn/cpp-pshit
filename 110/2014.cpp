#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int everyrow(int a[][], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        mp[a[0][i]] = 1;
    }
    int cnt = 0;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mp[a[i][j]] == i){
                mp[a[i][j]]++;
            }
        }
    }
    for (auto it : mp){
        if (it.second == n){
            cnt++;
        }
    }
    return cnt;
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
        set<int> check;
        int a[n*n];
        for (int i = 0; i < n*n; i++)
        {
            cin >> a[i];
            check.insert(a[i]);
        }

        // for (auto i : check) cout << i;
        int count = 0, row = 0;
        for (int x : check)
        {
            while (row < n)
            {
                int mark = 0;
                for (int i = row*n; i < (row+1)*n; i++)
                {
                    if (x == a[i])
                    {
                        row++;
                        mark = 1;
                        break;
                    }
                }
                if (!mark) 
                {
                    row = 0;
                    break;
                }
            }
            if (row == n)
            {
                row = 0;
                count++;
            }
        }

        cout << count << endl;
    }
}