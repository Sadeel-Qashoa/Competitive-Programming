#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

ll n;
vector<vector<char>> v;
vector<vector<int>> vis;

bool valid(ll row, ll col)
{
    for (int k = 0; k < n; k++)
    {
        // colomn k
        if (v[k][col] == 'Q')
        {
            return false;
        }
    }
    //diagonals
    // first one
    for (int i = row, j = col; i >= 0 && j >= 0; j--, i--)
    {
        if (v[i][j] == 'Q')
            return false;
    }
    // sesond
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (v[i][j] == 'Q')
            return false;
    }
    return true;
}

void backTracking(ll r)
{
    if (r == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] ;
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (valid(r, j))
        {
            // do
            v[r][j] = 'Q';
            // recurse
            backTracking(r+1);
            // undo
            v[r][j] = '.';
        }
    }
}

void solve()
{
    cin >> n;
    vis =vector<vector<int>>(n,vector<int>(n));
    v = vector<vector<char>>(n, vector<char>(n, '.'));
    backTracking(0);
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
