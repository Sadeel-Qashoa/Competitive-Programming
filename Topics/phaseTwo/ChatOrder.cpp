#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll n;
    cin >> n;
    vector<string> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_set<string> seen ;
    for (ll i=n-1; i>=0; i--)
    {
        if (seen.insert(v[i]).second)
        {
            cout << v[i] << endl;
        }
        seen.insert(v[i]);
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
