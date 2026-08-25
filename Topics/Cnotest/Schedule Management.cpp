#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
bool can(int T, vector<ll>& cnt, int n)
{
    ll extra = 0;
    ll free = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt[i] > T)
            extra += cnt[i] - T;
        else
            free += (T - cnt[i]) / 2;
    }

    return free >= extra;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> cnt(n,0);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        x--;
        cnt[x]++;
    }
    int l = 1, r = m;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (can(mid, cnt, n))
            r = mid;
        else
            l = mid + 1;
    }

    cout << l << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}