#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
const ll N = 1005;
int arr[N][N];
bool vist[N][N];
int n, m;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
//يمين يسار تحت فوق
bool valid(int i, int j)
{
    if (i >= 0 && j >= 0 && i < n && j < m && arr[i][j] != 0 && !vist[i][j]) return true;
    return false;
}
int dfs(int i,int j)
{
    vist[i][j] = true;
    int ans= arr[i][j];
    for (int k = 0; k < 4; k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];
        if (valid(x,y))
        {
            ans+=dfs(x,y);
        }
    }
    return ans;
}
void solve()
{
    int mx = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vist[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (valid(i, j))
            {
                sum = dfs(i, j);
                mx = max(mx, sum);
            }
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
