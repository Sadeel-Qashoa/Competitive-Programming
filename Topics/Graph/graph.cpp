#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
const int N = 100;
//DFS
vector<bool> vist;
vector<vector<int>> adj;

void dfs(int node)
{
    vist[node] = true;
    cout << node << " ";
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
        adj[v].push_back(u); // if undirected
    }
    dfs(0);
}
/*
input:
7 6
0 1
0 2
1 3
1 4
2 5
2 6
output:
0 1 3 4 2 5 6
 */
vector<vector<int>> adjacency;
// space
void adjacencyList()
{
    int n, m;
    cin >> n >> m;
    adjacency.resize(n + 5);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u); // if undirected
    }
}

//space ( v square / v^2 )
// that is a disadvantage
// advantage to get any edge by O(1)
int adjmatrix[N][N];

void adjacencyMatrix()
{
    int n, m; // nodes/edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1; // if undirected
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << adjmatrix[k][i] << " ";
        }
        cout << endl;
    }
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

/*
*
1 2

2 3

1 3
 */
