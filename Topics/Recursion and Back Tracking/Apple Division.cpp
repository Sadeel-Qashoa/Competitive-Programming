#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
/*
There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.
Input
The first input line has an integer n: the number of apples.
The next line has n integers p_1,p_2,\dots,p_n: the weight of each apple.
Output
Print one integer: the minimum difference between the weights of the groups.
Constraints

1 \le n \le 20
1 \le p_i \le 10^9

Example
Input:
5
3 2 7 4 1

Output:
1

Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8).
 */
ll n;
vector<ll> v;
int backTracking(int i,int sum1,int sum2)
{
    if (i == n)
    {
        return abs(sum2-sum1);
    }
    ll option1=backTracking(i+1,sum1+v[i],sum2);
    ll option2=backTracking(i+1,sum1,sum2+v[i]);
    return min(option1,option2);
}

void solve()
{
    cin >> n;
    v.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << backTracking(0,0,0) << endl;
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
