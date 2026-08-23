#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    ll place=1;
    while (n>0)
    {
        ll dig=n%10;
        if(dig!=0)
        {
            ans.push_back(dig*place);
        }
        n/=10;
        place*=10;
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
