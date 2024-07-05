#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

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
        stack<int> st;
        st.push(1);
        int pot = 1;
        forloop(i, 0, (int)s.length())
        {
            pot++;
            if (s[i] == 'I')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(pot);
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << el;
    }
}