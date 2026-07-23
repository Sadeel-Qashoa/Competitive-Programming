#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// مش فااااااهمة
void solve()
{
    int n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    int l = 0, r = n , ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        vector<ll> v2;
        for (int i = 0; i < mid; i++)
        {
            v2.push_back(v[i]);
        }
        sort(v2.rbegin(), v2.rend());
        ll curr = h;
        for (int i = 0; i < mid; i += 2)
        {
            curr -= v2[i];
        }
        if (curr >= 0)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
