#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll l, r;
    cin >> l >> r;
    if (l*2<=r)
    {
        cout << l << " " << 2*l << endl;
    }
    else
    {
        cout << -1 << " " << -1 << endl;
    }
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
