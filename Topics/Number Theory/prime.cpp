#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e7;
// The Great Eng : Sadeel Qashoa
bool neivePrime()
{
    //O(n)
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2) return true;
    else return false;
}

bool prime(int n)
{
    //O(sqrt(n/2))
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{

}

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
