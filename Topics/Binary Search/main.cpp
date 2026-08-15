#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    int x;
    while (n != 0)
    {
        x = n % 10;
        if (x == 4 || x == 7) cnt++;
        n /= 10;
    }
    if (cnt % 10 == 4 || cnt % 10 == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
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
