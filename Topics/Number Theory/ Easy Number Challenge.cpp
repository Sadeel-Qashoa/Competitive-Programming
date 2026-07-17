#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
const ll MOD = 1073741824;
vector<ll> divisors(ll n)
{
    vector<ll> v;
    for (int i= 1; i*i <=n ; i++)
    {
        if (n%i == 0)
        {
            v.push_back(i);
            if (n/i != i)
            {
                v.push_back(n/i);
            }
        }
    }
    return v;
}
int mod(int a,int b)
{
return ((a%MOD)+(b%MOD))%MOD;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll ans =0;
    map<ll, ll> mp;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                ll x = i * j * k ;
                if (mp.count(x)==1)
                {
                    ans= mod(ans,mp[x]);
                }
                else
                {
                   vector<ll> v= divisors(x);
                    ans=mod(ans,v.size());
                    mp[x]=v.size();
                }
            }
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