#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve()
{
    int n;
    cin >> n;
    for (int i = n; i <= 1000; i += n)
    {
        cout << i << " ";
    }
}
// each multiplier accept division on the num
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
