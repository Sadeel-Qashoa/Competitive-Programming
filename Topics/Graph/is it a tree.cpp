#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

//Tree:
//1-connected
//2-acyclic
//3-edges(m)=n-1
//لو كان الادجز بساوي العناصر ناقص 1 مستحيل تكون سايكلك
//بالتالي بس بنا نفحص الكونكتد
vector<bool> vist;
vector<vector<int>> adj;

void dfs(int node)
{
    vist[node] = true;
    for (auto child : adj[node])
    {
        if (!vist[child])
            dfs(child);
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
        adj[v].push_back(u); // if undirected
    }
    int cnt = 0;
    for (int i = 1; i <=n; i++)
    {
        if (!vist[i])
        {
            cnt++;
            dfs(i);
        }
    }
    if (cnt==1 && m==n-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
