#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//https://vjudge.net/problem/UVA-10608
vector<bool> vist;
vector<vector<int>> adj;
int cnt=0;
void dfs(int node)
{
    vist[node] = true;
    cnt++;
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
    adj.assign(n + 1, {});
    vist.assign(n + 5, false);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int mx=0;
    for (int i=1;i<=n;i++)
    {
        if (!vist[i])
        {
            cnt=0;
            dfs(i);
            mx=max(mx, cnt);
        }
    }
    cout << mx << endl;
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
