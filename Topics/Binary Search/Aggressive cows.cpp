#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
bool valid(ll mid, vector<ll>& v, ll c)
{
    ll lst = v[0];
    ll cnt = 1;

    for (ll i = 1; i < v.size(); i++)
    {
        if (v[i] - lst >= mid)
        {
            cnt++;
            lst = v[i];
        }
    }

    return cnt >= c;
}
void solve()
{
    ll n, c;
    cin >> n >> c;
    // c عدد البقر
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    //the range of distances:
    ll l = 1;
    ll r = a[n - 1] - a[0];
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        //عشان ما يعمل اوفر فلو
        if (valid(mid, a, c))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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