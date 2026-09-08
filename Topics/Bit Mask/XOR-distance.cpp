#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, r;
    cin >> a >> b >> r;
    ll x = 0;
    if (a < b)swap(a, b);
    bool firstBit = false;
    for (int bit = 63; bit >= 0; bit--)
    {
        ll aBit = a >> bit & 1, bBit = b >> bit & 1;
        if (aBit != bBit)
        {
            if (!firstBit)
            {
                firstBit = true;
            }
            else
            {
                if (aBit)
                {
                    ll nwX =x | (1ll << bit);
                    if (nwX <= r)
                    {
                        x = nwX;
                    }
                }
            }
        }
    }
    cout<< (a^x)-(b^x)<<endl;
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
