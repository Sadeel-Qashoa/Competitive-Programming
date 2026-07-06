#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa

// دالة الـ GCD التي كتبناها سابقاً
long long gcd_recursive(long long a, long long b) {
    return b == 0 ? a : gcd_recursive(b, a % b);
}

// دالة الـ LCM بناءً على القانون
long long lcm_custom(long long a, long long b) {
    if (a == 0 || b == 0) return 0;

    // 💡 نصيحة احترافية: نقسم أولاً ثم نضرب لتفادي الـ Overflow
    return (a / gcd_recursive(a, b)) * b;
}
void solve()
{

}
// same as GCD -> O(\log(\min(a, b)))
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
    int result = lcm(12, 24);
    cout << result << "\n";
    return 0;
}