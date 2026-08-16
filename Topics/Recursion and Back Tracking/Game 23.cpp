#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
int cnt(ll n)
{
    if (n == 1)return 0;
    if (n%2==0)
    {
        return 1+cnt(n/2);
    }
    else if (n%3==0)
    {
        return 1+cnt(n/3);
    }
    return 1e9;
}
void solve()
{
    ll n,m;
    cin >> n >> m;
    if (m%n!=0)
    {
        cout<<-1<<endl;
        return;
    }
    int curr=m/n;
    ll ans=cnt(curr);
    if (ans>=1e9)
    {
        cout << -1 << endl;
        return;
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
