#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//Binary search
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        ll closer=1e9;
        //Greater or equal
        auto it=lower_bound(b.begin(), b.end(), a[i])-b.begin();
        if (it!=b.size())
        {
            closer=min(closer,abs(a[i]-b[it]));
        }
        //less than me
        auto it2=upper_bound(b.begin(), b.end(), a[i])-b.begin();
        it2--;
        if (it2>=0)
        {
            closer=min(closer,abs(a[i]-b[it2]));
        }
        ans=max(ans,closer);
    }
    cout << ans << endl;
}
//Two Pointers
void solve2()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans=0;
    ll j=0;
    for (ll i = 0; i < n; i++)
    {
        while (j < m && b[j] < a[i])
        {
            j++;
        }
        ll closer = 1e18;
        if (j < m)
        {
            closer = min(closer, abs(a[i] - b[j]));
        }
        if (j > 0)
        {
            closer = min(closer, abs(a[i] - b[j - 1]));
        }

        ans = max(ans, closer);
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}