#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa


// خوارزمية إقليدس باستخدام باقي القسمة O(log(min(a, b)))
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int gcd_recursive(int a, int b) {
    if (b == 0) return a;
    return gcd_recursive(b, a % b);
}

// O(root(n))
// دالة تقوم بتحليل الرقم وطباعة عوامله وأسسها
void primeFactorization(int n) {
    map<int, int> factors; // لتخزين العامل الأولي وأسه (تكراره)

    // نمشي من 2 إلى جذر الـ n
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[i]++; // زيادة أس العامل i
            n /= i;       // تقليص العدد n
        }
    }

    // إذا المتبقي من n أكبر من 1، فهو حتماً عدد أولي
    if (n > 1) {
        factors[n]++;
    }

    // طباعة النتيجة
    for (auto const& [prime, count] : factors) {
        cout << prime << "^" << count << " ";
    }
    cout << "\n";
}
void solve()
{

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
    //خوارزمية إقليدس باستخدام باقي القسمة O(log(min(a, b)))
    int g = __gcd(180, 48);
    cout << g << "\n";
    return 0;
}