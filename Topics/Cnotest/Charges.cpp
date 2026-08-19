#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void get()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find('+') == string::npos &&
        s.find('-') == string::npos)
    {
        cout << n << '\n';
        return;
    }
    ll ans = 0;
    int i = 0;

    while (i < n)
    {
        if (s[i] != '0')
        {
            i++;
            continue;
        }
        int j = i;

        while (j < n && s[j] == '0')
        {
            j++;
        }
        if (i > 0 && j < n)
        {
            if (s[i - 1] != s[j])
            {
                int zeros = j - i;
                if (zeros % 2 == 1)
                {
                    ans++;
                }
            }
        }
        i = j;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        get();
    }
    return 0;
}
