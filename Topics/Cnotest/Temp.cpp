#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa


void get()
{
    ll A,B;
    cin>>A>>B;
    if (A>0 && B==0)
    {
        cout<<"Gold\n";
    }
    else if (A==0 && B>0)
    {
        cout<<"Silver\n";
    }
    else
    {
        cout<<"Alloy\n";
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
        get();
    }
    return 0;
}
