#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        ll rem = x - v[i].first,sum=0;
        ll l=i+1, r=n-1;
        while (l < r)
        {
             sum=v[l].first+v[r].first;
            if (sum>rem)
            {
                r--;
            }
            else if (sum<rem)
            {
                l++;
            }
            else
            {
                cout<<v[i].second+1<<" "<<v[l].second+1<<" "<<v[r].second+1<<endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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