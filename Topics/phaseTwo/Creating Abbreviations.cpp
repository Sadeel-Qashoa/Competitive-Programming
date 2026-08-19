#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_set<char> s;
    for (int i = 1; i <= n; i++)
    {
        string a;
        cin >> a;
        s.insert(a[0] - 'a' + 'A');
    }
    vector<string> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<bool> used(m, false);
    int done = 0;
    while (done < m)
    {
        bool found = false;
        for (int i = 0; i < m; i++)
        {
            if (used[i])
                continue;
            bool possible = true;
            for (char c : a[i])
            {
                if (!s.count(c))
                {
                    possible = false;
                    break;
                }
            }
            if (possible)
            {
                used[i] = true;
                done++;
                s.insert(a[i][0]);
                found = true;
            }
        }
        if (!found)
            break;
    }
    cout << (done == m ? "YES\n" : "NO\n");
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
