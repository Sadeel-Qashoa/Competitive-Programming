#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<int> dp(n,1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout<<*max_element(dp.begin(), dp.end());
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
