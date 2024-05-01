#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int triplet[3], tmp[3], ok;
void init()
{
    forloop(i, 0, 3)
        tmp[i] = i;
}

// void next()
// {
//     int i = 2;
//     while (tmp[i] == n - 2 + i && i >= 0) --i;

//     if (i < 0) ok = 0;
//     else {
//         tmp[i]++;
//         forloop(j, i+1, 3) tmp[j] = tmp[j - 1] + 1;
//     }
// }

int twoSum(vector<ll> &m, int n) // two sum using two pointers
{
    for (int i = n - 1; i >= 2; i--) 
    {
        int l = 0;
        int r = i - 1;
        while (l < r) 
        {
			if (m[l] + m[r] == m[i]) return 1;
            (m[l] + m[r] < m[i]) ? l++ : r--;
        }
    }
    return 0;
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
        vector<ll> a(n);
        forloop(i, 0, n) 
        {
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a.begin(), a.end());
        
        (twoSum(a, n)) ? cout << "YES" << endl : 
                        cout << "NO" << endl;
        // ok = 1;
        // init();
        // while (ok)
        // {
        //     forloop(i, 0, 3) triplet[i] = a[tmp[i]];
        //     ll tmp1 = (triplet[2] - triplet[1])*(ll)(triplet[2] + triplet[1]);
        //     if (triplet[0] == sqrt(tmp1))
        //     {
        //         cout << "YES" << endl;
        //         ok = 99999;
        //         break;
        //     }
        //     else next();
        // }
        // if (!ok) cout << "NO" << endl;
    }
}