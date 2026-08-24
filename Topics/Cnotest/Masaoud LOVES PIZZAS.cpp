#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll l=0,sum=0,cnt=0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll r = 0; r < n; r++)
    {
        sum+=v[r];
        while (sum>=x)
        {
            sum-=v[l];
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt << endl;
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