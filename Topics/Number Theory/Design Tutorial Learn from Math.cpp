#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
bool prime(int n)
{
    //O(sqrt(n/2))
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int i=4, j=n-4;
    while (prime(i) || prime(j))
    {
        i++;
        j--;
    }
    cout << i << " " << j;
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
