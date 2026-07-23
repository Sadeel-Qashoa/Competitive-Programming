#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<ll> divisors(ll n) //sqrt(n)
{
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
    return v;
}
// the process of delete an element takes alot time
// so replace numbers by -1 is better
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n-1] << " ";
    vector<ll> res=divisors(v[n-1]);
    sort(res.begin(), res.end());
    int j=0;
    for (int i=0; i<n && j<res.size(); i++)
    {
        if (v[i]==res[j])
        {
            j++;
            v[i]=-1;
        }
    }
    sort(v.begin(), v.end());
    cout << v[n-1];

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
