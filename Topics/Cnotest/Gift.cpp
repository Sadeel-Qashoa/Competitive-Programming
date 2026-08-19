#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void get()
{
    ll n, k;
    cin >> n >> k;
    ll sum=0;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    if (sum < n)
    {
        cout << "NO";
    }
    else if (k == 0)
    {
        if (sum % n == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        get();
    }
    return 0;
}
