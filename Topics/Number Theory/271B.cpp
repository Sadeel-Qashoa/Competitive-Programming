#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e7;
// The Great Eng : Sadeel Qashoa
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
    int n, m;
    cin >> n >> m;
    seive();
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            auto it = lower_bound(primes.begin(), primes.end(), a[i][j]);
            a[i][j] = *it - a[i][j];
        }
    }
    int sum = 0, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        mn = min(mn, sum);
    }
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        mn = min(mn, sum);
    }
    cout << mn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
