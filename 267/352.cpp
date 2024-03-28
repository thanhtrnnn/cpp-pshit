#include <bits/stdc++.h>
using namespace std;

using ll = long long;

unsigned int wordscount(string str)
{
    stringstream stream(str);
    int count = 0;
    while (stream >> str) count++;
    return count;
}

string lowercase(string s)
{
    for (char &x : s) x = (char)tolower(x);
    return s;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);
    
    map<string, int> allmails;
    int n; cin >> n;
    cin.ignore();
    while(n--)
    {
        string name;
        getline(cin, name);

        string mail = "", tmp = "";
        int words = wordscount(name);
        int cnt = 0;
        stringstream ss(name);
        while (ss >> name)
        {
            if (cnt != words - 1) tmp += (char)tolower(name[0]);
            else mail.append(lowercase(name));
            cnt++;
        }
        mail.append(tmp);
        if (!allmails.count(mail)) cout << mail;
        else cout << mail << allmails[mail] + 1;
        cout << "@ptit.edu.vn" << endl;
        allmails[mail]++;
        // for (auto it : allmails) cout << it.first << " " << it.second << endl;
    }
}