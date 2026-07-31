#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
vector<bool> vist;
vector<vector<int>> adj;
//لو رجعت للنود من طريق مختلف يعني عندي سايكل
bool dfs(int node,int par)
{
    vist[node] = true;
    bool cyclic = false;
    for (auto child : adj[node])
    {
        if (!vist[child])
        {
            cyclic |= dfs(child,par);
        }
        else if (child != par)
        {
            return true;
        }
    }
    return cyclic;
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
        adj[v].push_back(u); // if undirected
    }
    bool isCycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vist[i])
        {
            isCycle|=dfs();
        }
    }
    cout<< (isCycle?"Cyclic":"Ancyclic")<<endl;
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