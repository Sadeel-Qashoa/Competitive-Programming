#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void solve1() // O(n)
{ // Naive Solution
    int n;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        if (n%i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
void solve() //sqrt(n)
{
ll n; cin >> n;
    for (int i= 1; i*i <=n ; i++)
    {
        if (n%i == 0)
        {
            cout << i << " " ;
            if (n/i != i)
            {
                cout << n/i << " ";
            }
        }
    }
    cout << endl;
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
