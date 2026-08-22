#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//بدي اقل عدد دور يسرقهن ورا بعض ليوصل التارجت
//
void solve()
{
    ll n, target;
    cin >> n >> target;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum=0,l=0,mn=n+1;
    for (ll r = 0; r < n; r++)
    {
        sum+=v[r];
        while (sum>=target)
        {
            mn=min(mn,r-l+1);
            sum-=v[l];
            l++;
        }
    }
    if (mn>n)
    {
        cout << -1;
    }
    else
    {
        cout << mn;
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
