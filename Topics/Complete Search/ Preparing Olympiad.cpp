#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
bool isOne(ll mask, ll ind)
{
    return (mask & (1LL << ind));
}

void solve()
{
    ll n,l,r,x;
    cin >> n >> l >> r >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt=0;

    for (ll mask = 0; mask < (1 << n); mask++)
    {
        vector<ll> ans;
        ll sum=0,mn=1e9,mx=0;
        for (ll i = 0; i < n; i++)
        {
            if (isOne(mask, i))
            {
                ans.push_back(v[i]);
                sum+=v[i];
                //mn=min(mn,v[i]);
                //mx=max(mx,v[i]);
                //then mx-mn>=x??
            }
        }
        sort(ans.begin(), ans.end());
        if (ans.size()>=2 && sum>=l && sum<=r && ans.back() - ans.front()>=x )
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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
