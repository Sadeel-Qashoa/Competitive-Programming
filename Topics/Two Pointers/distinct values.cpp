#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//بدي بكل سب اريه من سايز ك كم عدد الديستنتك فاليوز
//
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    vector<ll> ans;
    ans.emplace_back(mp.size());
    //(n log n)
    // log coz of map
    for (int i=k;i<n;i++)
    {
        mp[v[i-k]]--;
        if (mp[v[i-k]] == 0)
        {
            mp.erase(v[i-k]);
        }
        mp[v[i]]++;
        ans.emplace_back(mp.size());
    }
    for (auto x : ans)
    {
        cout << x << endl;
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
