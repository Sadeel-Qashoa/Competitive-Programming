#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void get()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    ll diff = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '1' && t[i] == '0') || (s[i] == '0' && t[i] == '1'))
        {
            diff++;
        }
        else if (s[i] == '1' && t[i] == '1')
        {
            ones++;
        }
    }
    if (ones % 2 == 1)
    {
        cout << "YES\n";
    }
    else if (diff > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        get();
    }
    return 0;
}
