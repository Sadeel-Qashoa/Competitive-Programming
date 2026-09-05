#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//نفس مسألة  preparing olympaid
//بس الكونسترينز 40
//2^40 large num
// we can't solve it in bit mask
void solve()
{
    //نقسمها نصين بصير كل نص 20
    //وكل وحدة بت ماسك لحالها
    //2^20+2^20=2^21
    ll n, x;
    cin >> n >> x;
    //x is the target sum
    vector<ll> v(n), l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i < n / 2)
        {
            l.push_back(v[i]);
        }
        else
        {
            r.push_back(v[i]);
        }
    }
    vector<ll> sums;
    ll ans = 0;
    for (ll mask = 0; mask < 1ll << l.size(); mask++)
    {
        ll sum = 0;
        for (ll i = 0; i < l.size(); i++)
        {
            if (mask & (1ll << i))
            {
                sum += v[i];
            }
        }
        sums.push_back(sum);
    }
    sort(sums.begin(), sums.end());
    for (ll mask = 0; mask < 1ll << r.size(); mask++)
    {
        ll sum = 0;
        for (ll i = 0; i < r.size(); i++)
        {
            if (mask & (1ll << i))
            {
                sum += v[i];
            }
        }
        ll rem = x - sum;
        ll freq = upper_bound(sums.begin(), sums.end(), rem) - lower_bound(sums.begin(), sums.end(), rem);
// بعطيني مكان اخر ريمايندر واول ريم بالتالي بطلع عدد تكرارهم
        ans += freq;
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
