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
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll l=0, r=(n+1)/2,ans=0;
    while(r<n)
    {
        if (v[l]*2<=v[r])
        {
            ans++;
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    cout << n-ans << endl;
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
