#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int count(string s, int k)
{
    int n = s.length();
    int cnt[26];
    int res = 0;
    forloop(i, 0, n)
    {
        int diff = 0;
        memset(cnt, 0, sizeof(cnt));
        for (int j = i; j < n; j++)
        {
            if (cnt[s[j] - 'a'] == 0) diff++;
            cnt[s[j] - 'a']++;
            if (diff == k) res++;
            if (diff > k) break;
        }
    }
    return res;
}

int countAtMostK(string s, int k)
{
    if (s.length() == 0)
        return 0;
    unordered_map<char, int> mp;

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
        int k;
        string s; 
        cin >> s >> k;
        cout << count(s, k) << endl;
    }
}

/*
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        string s; cin>>s; 
        int k; cin>>k; 
        set<char>st; 
        int dem = 0; 
        for(int i=0;i<s.size();i++){ 
            for(int j=i;j<s.size();j++){ 
                st.insert(s[j]); 
                if(st.size()==k) dem++; 
                else if(st.size()>k)break; 
            } 
            st.clear(); 
        } 
        cout<<dem<<endl; 
    } 
}*/