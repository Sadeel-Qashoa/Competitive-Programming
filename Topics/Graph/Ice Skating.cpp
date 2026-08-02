#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<bool> vist;
vector<vector<int>> adj;

void dfs(int node)
{
    vist[node] = true;
    for (auto child : adj[node])
    {
        if (!vist[child])
        {
            dfs(child);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;

    adj.resize(n + 5);
    vist.assign(n + 5, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i].first == p[j].first ||
                p[i].second == p[j].second)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vist[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt - 1 << endl;
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
