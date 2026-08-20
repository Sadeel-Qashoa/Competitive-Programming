#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    cin>>a[0];
    for (ll i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    int idx = lower_bound(a.begin(), a.end(), a) - a.begin();
    cout << a[idx] << endl;
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
