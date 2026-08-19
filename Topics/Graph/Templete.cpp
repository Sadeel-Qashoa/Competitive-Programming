#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        cout << "NO\n";
        return;
    }
    ll n = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[n - i - 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
