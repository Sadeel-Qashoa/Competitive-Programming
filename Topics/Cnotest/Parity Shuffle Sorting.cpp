#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 0 << '\n';
        return;
    }

    if ((a[0] + a[n - 1]) % 2 == 0)
        a[0] = a[n - 1];
    else
        a[n - 1] = a[0];

    cout << n - 1 << '\n';
    cout << 1 << ' ' << n << '\n';

    for (int i = 1; i + 1 < n; i++)
    {
        if ((a[0] + a[i]) % 2 == 1)
            cout << 1 << ' ' << i + 1 << '\n';
        else
            cout << i + 1 << ' ' << n << '\n';
    }
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
