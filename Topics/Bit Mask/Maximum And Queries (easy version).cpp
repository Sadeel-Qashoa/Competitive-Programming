#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (auto& x : v) cin >> x;
    auto temp=v;
    while (q--)
    {
        ll k;
        cin >> k;
        v=temp;
        ll ans = 0;
        for (ll bit = 63; bit >= 0; --bit)
        {
            ll need = 0;
            ll curr = 1ll << bit;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] >> bit & 1) continue;
                ll val = curr - (v[i] &(curr-1));
                //& = mod
                need+=val;
                if (need > k) break;
            }
            if (need > k) continue;
            ans|=1ll<<bit;
            k-=need;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] >> bit & 1) continue;
                ll val = curr - (v[i] &(curr-1));
                v[i]+=val;
            }
        }
        cout << ans << endl;
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
