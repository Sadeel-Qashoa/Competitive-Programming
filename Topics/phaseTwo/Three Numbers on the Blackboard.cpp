#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll tot=a+b+c;
    ll mx=max(a,max(b,c));
    ll my=min(a,min(b,c));
    ll range=mx-my;
    if (mx==a)
    {
        a= b+c;
    }
    else if (mx==b)
    {
        b= a+c;
    }
    else if (mx==c)
    {
        c= a+b;
    }
    mx= max(a,max(b,c));
    range=min(mx-my,range);
    cout<<range<<endl;

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
