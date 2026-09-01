#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, cnt=0, l=0;
    for (int r = 0; r < n; r++)
    {
        sum+=v[r];
        while (sum > x)
        {
            sum -= v[l];
            l++;
        }
        if (sum == x)
            cnt++;
    }
    cout << cnt << endl;
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