#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//num of subsequences= 2^n

void solve()
{
    ll n; cin >> n;
     cout<<__builtin_popcount(n)<<endl;
}
//13
//1101
//كل واحد ضاوي يعني مجموعة بكتيريا بوخدها
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
