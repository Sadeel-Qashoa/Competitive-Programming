#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> cnt(30,0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll bit=0;bit<30;bit++)
        {
            if (x & (1LL << bit))
                cnt[bit]++;
           // if (x>>bit &1)
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x=0;
        for (ll bit=0;bit<20;bit++)
        {
            if (cnt[bit] > 0)
            {
                // turn on
                x|=(1LL << bit);
                cnt[bit]--;
            }
        }
        ans += x * x;
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
