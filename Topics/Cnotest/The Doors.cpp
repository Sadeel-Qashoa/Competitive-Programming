#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll lastOne=-1, lastZero=-1;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
       if (v[i] == 1)
       {
           lastOne = i+1;
       }
        else if (v[i] == 0)
        {
            lastZero = i+1;
        }
    }
    cout<< min(lastOne, lastZero) << endl;

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