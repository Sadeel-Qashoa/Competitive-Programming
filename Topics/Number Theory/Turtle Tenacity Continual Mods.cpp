#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    if (a[0] != a[1])cout<<"YES"<<endl;
    else
    {
        for(int i=2; i<n; i++)
        {
            if (a[i]%a[0]!=0)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
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
