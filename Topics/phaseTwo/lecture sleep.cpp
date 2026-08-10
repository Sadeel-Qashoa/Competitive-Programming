#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 1)
        {
            sum += a[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (b[i] == 0)
            sum += a[i];
    }
    ll ans = sum;
    for (int i=k;i<n;i++)
    {
        // old a[i-k]
        // new a[i]
        if (b[i-k]==0)
        {
            sum -= a[i-k];
        }
        if (b[i]==0)
        {
            sum += a[i];
        }
        ans=max(ans,sum);
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
