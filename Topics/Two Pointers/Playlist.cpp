#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    ll l=0;
    set<ll> s;
    ll ans=0;
    for(ll r=0;r<n;r++)
    {
        while(s.find(v[r])!=s.end())
        {
            if (s.find(v[l])!=s.end())
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);

        ans = max(ans, (ll)s.size());
    }
    cout << ans << endl;
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
