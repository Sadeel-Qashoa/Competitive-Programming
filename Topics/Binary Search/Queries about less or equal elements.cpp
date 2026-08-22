#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll m;
    cin >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x;
    while (m--)
    {
        cin >> x;
        ll indx = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << indx << " ";
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

