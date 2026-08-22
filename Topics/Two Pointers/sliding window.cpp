#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//بدي السب اريه الي من طول معين باكبر مجموع
//
//
//
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans=0;
    //O(nk)
    // التايم كبير بدي حل أحسن
    for (int i = 0; i+k < n; i++)
    {
        ll sum = 0;
        for (int j = i; j <= i+k; j++)
        {
            sum += arr[j];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
void solve2()
{
    // best solution
    //O(n)
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans=0,sum=0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    ans = sum;
    for (int i = k; i < n; i++)
    {
        sum -= arr[i-k];
        sum += arr[i];
        ans = max(ans,sum);
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
