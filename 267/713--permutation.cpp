#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = a; i <= b; i++)

int a[100], n, ok;
void initialize()
{
    forloop(i, 1, n) a[i] = i;
}

void next()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i+1]) --i;

    if (i == 0) ok = 0;
    else {
        int j = n;
        while (a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
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
        cin >> n;
        initialize();
        ok = 1;
        while (ok) 
        {
            forloop(i, 1, n) cout << a[i];
            cout << " ";
            next();
        }
        // while (next_permutation(a + 1, a + n + 1));
        cout << endl;
    }
}

// int cnt = 0;
// void backtrack(vector<vector<int>> &list, vector<int> &nums, int start)
// {
//     if (start == (int)nums.size()) 
//     {
//         list.push_back(nums);
//         // cout << cnt++ << " ";
//     }
//     else {
//         for (int i = start; i < (int)nums.size(); i++)
//         {
//             swap(nums[start], nums[i]);
//             backtrack(list, nums, start + 1);
//             swap(nums[start], nums[i]);
//         }
//     }
// }

// vector<vector<int>> permute(vector<int>& nums) 
// {
//     vector<vector<int>> ans;
//     backtrack(ans, nums, 0);
//     return ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false); cin.tie(0);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     int n; cin >> n;
//     vector<int> a(n);
//     forloop(i, 0, n) cin >> a[i];
//     vector<vector<int>> ans = permute(a);
//     for (auto x : ans)
//     {
//         for (int i : x) cout << i << " ";
//         cout << endl;
//     }
// }

    