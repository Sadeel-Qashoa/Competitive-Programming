#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//num of subsequences= 2^n
ll getBit(ll mask,ll indx)
{
    return mask & (1ll << indx);
}
void solve()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // O(2^n * n) -> O(2^n) coz 2^n>>>>>>n
// بتزبط لو الكونسترين قليل لحد 20
    //30  انسى
    for (ll mask=0;mask< 1<<n; mask++)
    {
        vector<ll> sub;
        for (ll i = 0; i < n; i++)
        {
            //بلف عالفكتور اشوف اخترناهم ولا لا
            if (getBit(mask,i))
            {
                sub.push_back(v[i]);
            }
        }
        for (auto x : sub)
        {
            cout << x << " ";
        }
        cout << endl;
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
