#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void lowercase(string &s)
{
    for (char &c : s) c = tolower(c);
    s[0] = toupper(s[0]);
}

int wordscount(string str)
{
    stringstream stream(str);
    return distance(istream_iterator<string>(stream), istream_iterator<string>());
}

void standardname(string s, int choice)
{
    string tmp = "";
    stringstream ss(s);
    int cnt = 0;
    int n = wordscount(s);
    while (ss >> s)
    {
        lowercase(s);
        if (choice == 1)
        {
            if (cnt != n-1) 
            {
                tmp += s + " ";
                cnt++;
            }
            else cout << s << " " << tmp << endl;
        }
        else {
            if (cnt != n-1)
            {
                if (cnt == 0) tmp += s;
                else cout << s << " ";
            }
            else cout << s << " " << tmp << endl;
            cnt++;
        }
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
        int choice; cin >> choice;
        cin.ignore();
        string s;
        getline(cin, s);
        standardname(s, choice);        
    }
}