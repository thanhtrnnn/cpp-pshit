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
		for (int i = 0; i < s.length(); i++) {
			int count = 0;
			for (int j = i; j < s.length(); j++) {
				if (s[i] == s[j])
					count++;
			}
			cout << s[i] << count;
			i += count-1;
		}
		cout << endl;
    }
}