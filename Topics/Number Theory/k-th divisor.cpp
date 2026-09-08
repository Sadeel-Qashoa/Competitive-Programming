#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> v1,v2;
    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);

            if (i * i != n)
                v2.push_back(n / i);
        }
    }
    reverse(v2.begin(), v2.end());
    vector<ll> v = v1;
    for (ll x : v2)
        v.push_back(x);

    if (k > v.size())
        cout << -1 << '\n';
    else
        cout << v[k - 1] << '\n';

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
