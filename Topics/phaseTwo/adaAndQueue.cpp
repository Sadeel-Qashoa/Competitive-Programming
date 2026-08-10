#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

void solve()
{
    deque<int> q;
    ll n;
    cin >> n;
    bool rev=false;
    while (n--)
    {
        string s;
        cin >> s;
        if (s=="toFront")
        {
            int x;
            cin >> x;
            if (!rev)
                q.push_front(x);
            else
                q.push_back(x);
        }
        else if (s=="front")
        {
            if (q.empty())
            {
                cout <<"No job for Ada?"<< endl;
                continue;
            }
            if (!rev)
            {
                cout << q.front() << '\n';
                q.pop_front();
            }
            else
            {
                cout << q.back() << '\n';
                q.pop_back();
            }
        }
        else if (s=="back")
        {
            if (q.empty())
            {
                cout <<"No job for Ada?"<< endl;
                continue;
            }
            if (!rev)
            {
                cout << q.back() << '\n';
                q.pop_back();
            }
            else
            {
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
        else if (s=="reverse")
        {
            rev = !rev;
        }
        else if (s=="push_back")
        {
            int x;
            cin >> x;
            if (!rev)
                q.push_back(x);
            else
                q.push_front(x);
        }
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
