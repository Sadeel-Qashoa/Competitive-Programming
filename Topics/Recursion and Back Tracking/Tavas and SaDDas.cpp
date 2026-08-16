#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<long long> lucky;
void generate(ll x)
{
    if (x > 1e10)
        return;
    if (x != 0)
        lucky.push_back(x);
    generate(x*10 +4);
    generate(x*10 +7);
}

void solve()
{
    ll n;
    cin >> n;
    generate(0);
    sort(lucky.begin(), lucky.end());
    auto it = upper_bound(lucky.begin(), lucky.end(), n) - lucky.begin();;
    cout << it << "\n";

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
