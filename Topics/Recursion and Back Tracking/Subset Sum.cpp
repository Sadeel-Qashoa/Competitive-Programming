#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
/*
Given an array A of N unique numbers and a target sum T.
You are asked to print all the subsets that sum up to the target sum.
 */
//5 6
//1 5 2 7 3
int n, target;
vector<int> v, subSet;

void backTracking(int i)
{
    if (i == n)
    {
        int sum = 0;
        for (int j = 0; j < subSet.size(); j++)
        {
            sum += subSet[j];
        }
        if (sum == target)
        {
            for (int j = 0; j < subSet.size(); j++)
            {
                cout << subSet[j] << " ";
            }
            cout << endl;
        }
        return;
    }
    //take
    // do
    subSet.push_back(v[i]);
    // recurse
    backTracking(i + 1);
    // undo
    //  عكس الدو وبعدها ريكرس
    subSet.pop_back();
    // leave
    backTracking(i + 1);
}

void solve()
{
    cin >> n >> target;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
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
