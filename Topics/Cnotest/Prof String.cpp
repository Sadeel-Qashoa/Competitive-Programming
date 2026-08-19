#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void get()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string word;

    while (ss >> word)
    {
        v.push_back(word);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (char &c : v[i])
        {
            c = tolower(c);
        }

        if (v[i].size() > 7)
        {
            v[i][0] = toupper(v[i][0]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];

        if (i != v.size() - 1)
            cout << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        get();
    }
    return 0;
}
