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
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n==1 || n==2)
    {
        cout << n;
        return;
    }
    ll cnt=0;
    ll ans = 2;
    for (ll i = 2; i < n; i++)
    {
        if (v[i - 1]+v[i-2] == v[i])
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        ans = max(ans, cnt+2);
    }
    cout << ans;
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