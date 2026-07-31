#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<vector<int>> adj;
vector<bool> vis;
vector<int> inti, goal, ans;

void dfs(int node, int even, int odd, int depth)
{
    vis[node] = true;

    if (depth % 2 == 0 && even)
        inti[node] = 1 - inti[node];

    if (depth % 2 == 1 && odd)
        inti[node] = 1 - inti[node];

    if (inti[node] != goal[node])
    {
        ans.push_back(node);
        inti[node] = goal[node];

        if (depth % 2 == 0)
            even = 1 - even;
        else
            odd = 1 - odd;
    }

    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            dfs(x, even, odd, depth + 1);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    adj.assign(n + 5, {});
    vis.assign(n + 5, false);
    inti.assign(n + 5, 0);
    goal.assign(n + 5, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        cin >> inti[i];

    for (int i = 1; i <= n; i++)
        cin >> goal[i];

    dfs(1, 0, 0, 0);

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << "\n";
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
