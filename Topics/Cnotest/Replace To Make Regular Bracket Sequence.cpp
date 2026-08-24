#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//
bool isOpen(char ch)
{
    return ch == '(' || ch == '[' || ch == '{' || ch == '<';
}

bool match(char open, char close)
{
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    if (open == '<' && close == '>') return true;

    return false;
}

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    ll cnt=0;
    for (char c : s)
    {
        if (isOpen(c))
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
               cout << "Impossible" << "\n";
                return;
            }
            char ch = st.top();
            st.pop();
            if (!match(ch, c))
            {
                cnt++;
            }
        }
    }
    if (!st.empty())
        cout << "Impossible\n";
    else
        cout << cnt << '\n';
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
