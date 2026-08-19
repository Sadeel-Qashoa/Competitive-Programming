#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
ll n ,k , h;
vector<ll> a;
void solve()
{
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]=abs(h-a[i]);
    }
    sort(a.begin(),a.end());
    ll ans=0;
    for(ll i = 0; i < k; i++)
    {
        ans+=a[i];
    }
    cout << ans << endl;

}
void get()
{
    cin >> n >> k >> h;
    a.assign(n,0);
    solve();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        get();
    }
    return 0;
}