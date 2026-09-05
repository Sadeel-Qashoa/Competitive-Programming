#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> cnt(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cnt[x]++;
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (cnt[i] > 1)
        {
            ans+=cnt[i];
            ans--;
        }
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
