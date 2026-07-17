#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
bool prime(int n)
{
    //O(sqrt(n/2))
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n; cin >> n;
    ll ans=0;
    for(ll i=1; i<=n; i++)
    {
        int primeDivisors=0;
        for(ll j=2; j<=n; j++)
        {
           if(i%j==0 && prime(j)) primeDivisors++;
        }
        if(primeDivisors==2) ans++;
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
