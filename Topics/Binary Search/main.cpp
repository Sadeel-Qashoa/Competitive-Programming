#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//O(log n)
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x;
    cin >> x;
    int l=0,r=n-1,ans=-1;
    while (l<=r)
    {
        int m = (l+r)/2;
        if (a[m]==x)
        {
            ans = m;
            break;;
        }
        if (a[m]<x)
        {
            l=m+1;
        }
        else if (a[m]>x)
        {
            r=m-1;
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
