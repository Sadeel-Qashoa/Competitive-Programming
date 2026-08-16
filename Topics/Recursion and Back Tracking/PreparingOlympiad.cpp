#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// أول ما تلاقي كلمة subsequence
// اعرف انه في complete search
//
//
int n, l, r, x;
vector<ll> v,subset;
// int solve2(int i)
// {
//    if (i==n)
//    {
//        ll sum=0,mn=1e9,mx=-1e9;
//        for (auto it:subset)
//        {
//            sum+=it;
//            mn=min(it,mn);
//            mx=max(it,mx);
//        }
//        if (sum>=l && sum<=r && mx-mn>=x)
//        {
//            return 1;
//        }
//        return 0;
//    }
//     int ans=0;
//     //do
//     subset.push_back(v[i]);
//     //recurse
//     ans+=solve2(i+1);
//     //undo
//     subset.pop_back();
//
//     //ماخدوش اصلاً
//     ans+=solve2(i+1);
//     return ans;
// }
// void solve()
// {
//     cin >> n >> l >> r >> x;
//     v.assign(n , 0);
//     for (auto &i:v)cin>>i;
//     cout << solve2(0);
// }
int solve2(int i, ll sum, ll mn, ll mx)
{
    if (i==n)
    {
        if (sum>=l && sum<=r && mx-mn>=x)
        {
            return 1;
        }
        return 0;
    }
    int ans=0;
    ans+=solve2(i+1,sum+v[i],min(mn,v[i]),max(mx,v[i]));
    ans+=solve2(i+1,sum,mn,mx);
    return ans;
}
void solve()
{
    cin >> n >> l >> r >> x;
    v.assign(n , 0);
    for (auto &i:v)cin>>i;
    cout << solve2(0,0,1e9,-1e9);
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
