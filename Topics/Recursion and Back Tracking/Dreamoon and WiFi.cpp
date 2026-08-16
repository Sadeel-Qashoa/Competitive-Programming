#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
string s, t;
int correct, current;

double solve2(int i)
{
    if (i == t.size())
    {
        if (current == correct)return 1;
        else return 0;
    }
    int ans = 0;
    if (t[i] == '+')
    {
        //do
        current++;
        //recurse
        ans = solve2(i+1);
        //undo
        current--;
        return ans;
    }
    else if (t[i] == '-')
    {
        //do
        current--;
        //recurse
        ans = solve2(i+1);
        //undo
        current++;
        return ans;
    }
    //do
    current++;
    //recurse
    ans += solve2(i + 1);
    //undo
    current--;

    //do
    current--;
    //recurse
    ans += solve2(i + 1);
    //undo
    current++;

    return ans;
}

void solve()
{
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            correct++;
        }
        else if (s[i] == '-')
        {
            correct--;
        }
    }
    //count of ?
    // number of possibilities = 2 ^ num of ?
    int cnt = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '?')
        {
            cnt++;
        }
    }
    double total= 1 << cnt;
    int ans = solve2(0);
    cout << fixed << setprecision(9);
    cout << ans/total << endl;
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
