#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
ll getBit(ll mask,ll indx)
{
    return mask & (1ll << indx);
}

ll turnOn(ll mask,ll indx)
{
    return mask | (1ll << indx);
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll res = l;
        // until 10^19 -> 63 bit
        for (int bit = 0; bit < 63; bit++)
        {
            if (getBit(res, bit) == 0)
            {
                if (turnOn(res, bit) <= r)
                {
                    res=turnOn(res,bit);
                }

            }
        }

     cout << res << endl;
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
