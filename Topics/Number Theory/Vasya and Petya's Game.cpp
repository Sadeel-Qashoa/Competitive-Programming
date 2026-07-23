#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
/*
 عشان اجيب اقل عدد من الاسئلة الي ممكن توصلني للجواب
 بجيب كل برايم وبضربه بنفسه لحد ما اوصل لاكبر رقم اقل من ن
 مثلاً عندي 6
 البرايم الي اقل منه : 2 3 5
 2*2= 4 4*2=8 لا ال8 اكبر اذن 4
 3
 5
 بالتالي عندي: 2 4 3 5
 */
// سؤال مش مفهوم اصلاً
vector<bool> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i=2;i*i<=n;i++)
    {
        if (prime[i])
        {
            for (int j=i*i;j<=n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}

void solve()
{
    int n;
    cin >> n;
    vector<bool> prime=sieve(n);
    vector<int> ans;
    for (int i=2;i<=n;i++)
    {
        if (prime[i])
        {
            ll x=i;
            while (x<=n)
            {
                ans.push_back(x);
                x*=i;
            }
        }
    }
    cout << ans.size() << endl;
    for (auto a : ans)
    {
        cout << a << " ";
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
