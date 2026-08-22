#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//بدي رقمين مجموعهم يساوي التراجت
//1 7 3 5 2, التارجت 7 اذن العددين 2 و 5
//بعمل سورت وبحرك بوينترين بس عشان ما يضيع الاندكس
//بعمل بير وهيك
void solve()
{
    ll n,target;
    cin >> n >> target;
    vector<ll> v(n);
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = {v[i], i+1};
    }
    sort(a.begin(), a.end());
    ll l=0, r=n-1;
    while (l<r)
    {
        ll sum=a[l].first+a[r].first;
        if (sum==target)
        {
            cout << a[l].second << " " << a[r].second << endl;
            return;
        }
        else if (sum>target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout<<"Impossible"<<endl;
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
