#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// حلي
/*
vector<long long> lucky;
void generate(ll x)
{
    if (x > 1e10)
        return;
    if (x != 0)
        lucky.push_back(x);
    generate(x*10 +4);
    generate(x*10 +7);
}
void solve()
{
    ll l,r;
    cin >> l >> r;
    generate(0);
    sort(lucky.begin(), lucky.end());
    ll ans=0,pre=0;
    for (ll x:lucky)
    {
        ll L=max(l,pre+1);
        ll R=min(r,x);
        if(L<=R)
        {
            ans+=(R-L+1)*x;
        }
        pre=x;
        if (x>=r)
        {
            break;
        }
    }
    cout << ans << endl;

}*/
// حل الكوتش
vector<long long> lucky;

void solve(ll n)
{
    if (n > 1e10) return;

    lucky.push_back(n);

    solve(n * 10 + 4);
    solve(n * 10 + 7);
}

void solve()
{
    solve(0);
    ll l, r;
    cin >> l >> r;
    ll sum = 0;
    sort(lucky.begin(), lucky.end());
    auto it = lower_bound(lucky.begin(), lucky.end(), l) - lucky.begin();
    while (lucky[it] <= r)
    {
        sum += (lucky[it] - l + 1) * lucky[it];
        l = lucky[it] + 1;
        it = lower_bound(lucky.begin(), lucky.end(), l) - lucky.begin();
    }
    cout << sum << endl;
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
