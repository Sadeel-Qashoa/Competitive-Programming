#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
ll getBit(ll mask,ll indx)
{
    return mask & (1ll << indx);
}

void solve()
{
    string s, t;
    cin >> s >> t;
    ll correct = 0, cnt = 0, current = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+') correct++;
        else correct--;
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '+') current++;
        else if (t[i] == '-') current--;
        else cnt++;
    }
    ll ans = 0;
    // to search the probability of "?"
    for (int mask = 0; mask < 1 << cnt; mask++)
    {
        ll cur = 0;
        // if 0 -> '-'
        // if 1 -> '+'
        for (int i = 0; i < cnt; i++)
        {
            if (getBit(mask, i))
            {
                cur++;
            }
            else
            {
                cur--;
            }
        }
        if (cur + current == correct)ans++;
    }
    long double res = ans;
    res /= 1 << cnt;
    cout << fixed<<setprecision(10)<<res << endl;
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
