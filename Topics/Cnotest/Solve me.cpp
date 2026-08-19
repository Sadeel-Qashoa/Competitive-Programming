#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    string t, s;
    cin >> t >> s;
    if (t[0]==s[0])
    {
     for (int i = 1; i < t.length(); i++)
     {
         if (s[i]!=t[i])
         {
             cout<<"NO\n";
             return;
         }
     }
        cout<<"YES\n";
    }
    else
    {
        cout << "NO" << endl;
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
        solve();
    }
    return 0;
}
