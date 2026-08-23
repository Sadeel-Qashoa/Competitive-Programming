#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
void solve()
{
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> freq(N, vector<int>(26, 0));
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (char c : s)
        {
            freq[i][c - 'a']++;
        }
    }
    while (Q--)
    {
        int x;
        cin >> x;

        x--;

        for (int i = 0; i < 26; i++)
        {
            cout << freq[x][i] << ' ';
        }

        cout << '\n';
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
