#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
const ll N = 1e6;
bool is_prime[N];

void seive()
{
    // O(n)
    fill(is_prime + 1, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

void solve()
{
    ll x;
    cin >> x;
    ll root = sqrt(x);
    if (root*root == x && is_prime[root])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    seive();
    while (t--)
    {
        solve();
    }
    return 0;
}
