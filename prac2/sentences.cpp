#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// ref 149 so better
void lowercase(string &s)
{
    for (char &c : s)
        c = (char)tolower(c);
}

int flag = 1;
void rmmarks(string s)
{
    int i = s.length()-1;
    char c = s[i];
    int last = 0;
    // bool mark = (c == '.' || c == '?' || c == '!');
    while (c == '.' || c == '?' || c == '!')
    {
        last = 1; flag = 1;
        s.erase(i, 1);
        c = s[--i];
    }
    if (!last) cout << s << " ";
    else cout << s << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string str = "", tmp;
    while (cin >> tmp) //getline thi` wa?
    {
        if (tmp.empty()) break;
        str += tmp + " ";
    }
    
    stringstream ss(str);
    string word;
    tmp = "";
    while (ss >> word)
    {
        lowercase(word);
        if (flag)
        {
			word[0] = toupper(word[0]);
			flag = 0;
		}
        rmmarks(word);
    }
}