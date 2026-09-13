#include <bits/stdc++.h>
using namespace std;
#define ll long long
// الكود غلط
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int gc=0;
    for (int i = 1; i < n; i++)
    {
        gc=gcd(gc, v[i]-v[i-1]);
    }
    if (gc == 0)
    {
        cout << -1;
    }
    else
    {
        cout<<gc;
    }
    cout << endl;
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
