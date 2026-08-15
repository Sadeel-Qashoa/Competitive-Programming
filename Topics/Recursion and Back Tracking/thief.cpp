#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
// عندي حرامي عنده شنتة بمساحة معينة وفي أشياء الها وزن وقيمة
// بده يحط فيها أكبر قيمة بقدر يحصل عليها بدون ما يتعدى الوزن المسموح
// 3 60, 4 80 , 5 90 , w=8
// bast case 3+5 = 150

//knapsack problem
ll n, cap;
vector<pair<ll, ll>> v;

int backTracking(int i, int cap)
{
    if (i == n)
        return 0;
    int take=0,leave=backTracking(i+1,cap);
    if (v[i].first<=cap)
    {
        take= v[i].second+backTracking(i+1,cap-v[i].first);
    }
    return max(take, leave);
}

void solve()
{
    cin >> n >> cap;
    for (ll i = 0; i < n; i++)
    {
        ll w, val;
        cin >> w >> val;
        v.push_back(make_pair(w,val));
    }
    cout << backTracking(0, cap) << endl;
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
