#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//Given unsorted array A of N positive integers and a Target Sum T,
//find a subarray whose sum = T
// target = 9
// 2 5 3 1 6 8
// بحط البوينترين بالاول وبعدها ببلش احرك حسب الناتج
void solve()
{
    ll n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    int l=0,sum=0;
    //O(n)
    //كل المنت بمر عليه مرتين
    // O(2n)=O(n)
    for (int r=0;r<n;r++)
    {
        sum+=arr[r];
        while (sum>target)
        {
            sum-=arr[l];
            l++;
        }
        if (sum==target)
        {
            cout << "Found" << endl;
            cout << l << " "<< r << endl;
            return;
        }
    }
    cout << "Not Found" << endl;
}
//لو بده عدد السب اريز الي بطلعو بساوو التارجت بعدل هون بس
/*
         if (sum==target)
        {
            cnt++;
        }
 */
//
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
