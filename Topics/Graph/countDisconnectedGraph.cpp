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
    int n, m;
    cin >> n >> m;
    adj.resize(n + 5);
    vist.assign(n + 5, false);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for (int i=1;i<=n;i++)
    {
        if (!vist[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
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
