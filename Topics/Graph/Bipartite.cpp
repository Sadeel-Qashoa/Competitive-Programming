#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<int> color;
vector<bool> vist;
vector<vector<int>> adj;
int ok=0;
void dfs(int node)
{
    vist[node] = true;
    for (auto child : adj[node])
    {
        if (!vist[child])
        {
            if (color[node]==1)color[child] = 2;
            else color[child] = 1;
            dfs(child);
        }
        else if (color[node]==color[child])ok=1;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n + 5);
    vist.assign(n + 5, false);
    color.assign(n + 5, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // if undirected
    }
    color[1]=1;
    dfs(1);
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