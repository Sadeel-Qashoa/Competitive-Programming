#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
Given N numbers as input where every number
will occur an even number of times except for 1 number,
that 1 number will appear an odd number of times.
Find that number
 */
//O ^ X = X
//X ^ X = 0
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        ans= ans^x;
    }
    cout << ans;
}
//O(1)
//اما لو فريقونسي وماب بدي O(n)
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
