#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// الحل الغبي الساذج
vector<ll> v;
void divisors(ll n) //sqrt(n)
{
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << endl;
}
int factorial(ll n)
{
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}
void solve1()
{
    ll n; cin >> n;
    divisors(factorial(n)) ;
    cout<< v.size() << endl;
}
// الحل المنطقي

map<int, int> mp;

void prime_factors(int n)
{//sqr(t)
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n>1) mp[n]++;//  ليش مش يساوي 1؟؟
}

void solve()
{
ll n; cin >> n;
    ll mod = 1e9 +7;
    for (int i = 2; i <= n; i++)
    {
        prime_factors(i);
    }
    ll ans = 1;
    for(auto x : mp)
    {
     ans*=(x.second+1);
        ans%=mod;
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
