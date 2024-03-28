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
    for (char &x : s)
        x = (char)tolower(x);
    return s;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    string name;
    getline(cin, name);

    string mail = "", sur = "";
    int words = wordscount(name);
    int cnt = 0;
    stringstream ss(name);
    while (ss >> name)
    {
        cnt++;
        if (cnt != words) sur += (char)tolower(name[0]);
        else mail.append(lowercase(name));
    }
    mail.append(sur);
    cout << mail.append("@ptit.edu.vn") << endl;
}