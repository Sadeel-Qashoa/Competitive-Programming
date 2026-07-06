#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
const ll N = 1e3 + 10;
bool is_prime[N];
vector<int> primes;

void seive()
{
    // O(n)
    fill(is_prime + 1, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n, k, cnt = 0;
    cin >> n >> k;
    seive();
    for (int i = 0; i < primes.size() - 1; i++)
    {
        int x = primes[i] + primes[i + 1] + 1;
        if (x <= n && is_prime[x])
            cnt++;
    }
    if (cnt >= k) cout << "YES";
    else cout << "NO";
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
