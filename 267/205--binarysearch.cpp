#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int binmax(vector<int> arr, int n)
{
    int left = 0;
    int right = n-1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
            return arr[mid];
        else if (arr[mid] < arr[mid+1]) left = mid + 1;
        else right = mid - 1;
    }
    return arr[right];
}

int binmax2(vector<int> a, int n)
{
    int left = 0;
    int right = n-1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] < a[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return a[left];
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        cout << a[n-1] << endl;
    }
}