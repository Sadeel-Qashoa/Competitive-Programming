#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// سؤال بده يشوف عدد البلوكات اللازمة
//  لو بدي طابق بدي 1
//طابقين 2+ 1
// 3 طوابق 3 + 3
//4 طوابق 6 +4
// فبدور عدد البوكات كم طابق بقدر يعملي
// 14_> 4
void solve()
{
    ll n;
    cin >> n;
    ll l=1, r=n,ans=1;
    while (l<=r)
    {
        ll m=(l+r)/2;
        ll need = m*(m+1)/2;
        if (need<=n)
        {
            l = m+1;
            ans =m;
        }
        else
        {
            r=m-1;
        }
    }
    cout << ans << endl;
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
