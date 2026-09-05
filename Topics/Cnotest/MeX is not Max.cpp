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
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    ll mex=0;
    while (s.count(mex))
    {
        mex++;
    }
    cout << mex << endl;


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