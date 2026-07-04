#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
ll n,k; cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if (n/i != i)
            {
                a.push_back(n/i);
            }
        }
    }
    sort(a.begin(), a.end());
    if (a.size() < k)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<a[k-1]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--)
    {
        solve();
    }
    return 0;
}