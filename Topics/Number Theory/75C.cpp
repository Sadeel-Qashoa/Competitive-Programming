#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<int> v;

void divisors(int n)
//sqrt(n)

{
    for (int i = 1; i * i <= n; i++)
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
    sort(v.rbegin(), v.rend());
    cout << endl;
}

void solve()
{
    ll l, r,ok=0;
    cin >> l >> r;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=l && v[i]<=r)
        {
            ok=1;
            cout << v[i] << endl;
            break;
        }
    }
    if(!ok)
    {
        cout << -1<< endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll g = __gcd(a, b);
    divisors(g);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
