#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = a; i < b; i++)

/*int a[100];
void initialize(int n)
{
    for(i, n) a[i] = i;
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
        initialize(n);
        do {
            for (i, n) cout << a[i];
            cout << " ";
        }
        while (next_permutation(a + 1, a + n + 1));
        cout << endl;
    }
}*/
int cnt = 0;
void backtrack(vector<vector<int>> &list, vector<int> &nums, int start)
{
    if (start == nums.size()) 
    {
        list.push_back(nums);
        cout << cnt++ << " ";
    }
    else {
        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[start], nums[i]);
            backtrack(list, nums, start + 1);
            swap(nums[start], nums[i]);
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<vector<int>> ans;
    backtrack(ans, nums, 0);
    return ans;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        vector<vector<int>> ans = permute(a);
        for (auto x : ans)
        {
            for (int i : x) cout << i << " ";
            cout << endl;
        }
    }
}

    