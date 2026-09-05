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
    ll sex=0,seven=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i]==6)
        {
            sex++;
        }
        else if (v[i]==7)
        {
            seven++;
        }
    }
    if (sex ==0 && seven==0)
    {
        cout << 0 << endl;
    }
    else if (sex==seven && sex==1)
    {
        cout<<1<<endl;
    }
    else if (sex==seven)
    {
        cout<<2*sex-1<<endl;
    }
    else
    {
        cout<<2*min(sex,seven)<<endl;
    }

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