#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
ll n;
vector<bool> isPrime;
void sieve(ll n)
{
    isPrime.resize(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    cin >> n;
    sieve(n);
    vector<ll> cnt(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        cnt[i] = cnt[i - 1];

        if (isPrime[i])
            cnt[i]++;
    }
    cout << cnt[n] << endl;

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