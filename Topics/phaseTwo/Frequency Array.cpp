#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == n)
    {
        cout << "prekrasnyy";
    }
    else
    {
        cout << "ne krasivo";
    }
    cout << endl;
}

void solve2()
{
    vector<ll> freq(100001, 0);
    ll n;
    cin >> n;
    bool beautiful = true;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
        if (freq[x] > 1)
        {
            beautiful = false;
        }
    }
    if (beautiful)
        cout << "prekrasnyy" << endl;
    else
        cout << "ne krasivo" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}
