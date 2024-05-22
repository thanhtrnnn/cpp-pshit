#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // ios::sync_with_stdio(false); cin.tie(0);

    int t; 
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> a(n);
        int check1 = 0;
        int check2 = 0;
        int index1 = 0, index2 = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        
        for (int i = 0;i < n;i++){
            for(int j = i + 1 ; j < n - 1;j++){
                if(a[i] > a[j] && check1 == 0){
                    index1 = i + 1;
                    check1 = 1;
                }
                if(a[n - i - 1] < a[n - j - 1] && check2 == 0){
                    index2 = n - i;
                    check2 = 1;
                }
            }
        }
        cout << index1 << " " << index2 << "\n";
    }
}