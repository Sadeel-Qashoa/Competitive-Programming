#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<bool> vist;
vector<vector<int>> adj;
const ll N = 2e5 + 3;
int mn=1e9;
int arr[N];
void dfs(int node)
{
    vist[node] = true;
    for (auto child : adj[node])
    {
        if (!vist[child])
        {
            mn=min(mn, arr[child]);
            dfs(child);
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    adj.resize(n + 5);
    vist.assign(n + 5, false);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans = 0;
    for (int i=1;i<=n;i++)
    {
        if (!vist[i])
        {
            mn=arr[i];
            dfs(i);
            ans+=mn;
        }
    }
    cout << ans << endl;
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