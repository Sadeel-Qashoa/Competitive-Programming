#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
void get()
{
    ll ans=0;
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            char c;
            cin>>c;
            if(c=='X')
            {
                ans+= min({i,j,9-i,9-j})+1;
            }
        }
    }
    cout<<ans<<endl;
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
