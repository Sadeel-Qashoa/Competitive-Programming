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

map<int, int> mp;

void prime_factors(int n)
{//sqr(t)
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n>1) mp[n]=1;
}

void solve()
{
    int n;
    cin >> n;
    prime_factors(n);
    for (auto p : mp)
    {
        cout<< p.first << " " << p.second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
