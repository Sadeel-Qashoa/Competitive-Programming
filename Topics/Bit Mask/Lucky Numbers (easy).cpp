#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll ans = LLONG_MAX;
    for (int i = 2; i <=10; i+=2)
    {
        for (ll mask=0; mask< 1<<i; mask++)
        {
            ll ones=__builtin_popcount(mask);
            ll zeros=i-ones;
            if (ones!=zeros)
            {
                continue;
            }
            ll num=0;
            for (ll j=i-1; j>=0; j--)
            {
                num *= 10;

                if (mask & (1LL << j))
                    num += 7;
                else
                    num += 4;
            }
            if (num >= n)
                ans = min(ans, num);
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
