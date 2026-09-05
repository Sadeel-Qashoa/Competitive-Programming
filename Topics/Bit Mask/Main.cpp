#include <bits/stdc++.h>
using namespace std;
#define ll long long
// The Great Eng : Sadeel Qashoa
//شفت لفت يعني ضرب 2
//1011 -> 10110
//شفت رايت يعني تقسيم 2
//1011 -> 0101
//X^0=X
//X^X=0
// not ~2=-3 , ~60=-61
// in bit mask we have 32 bit
//...000001101
ll getBit(ll mask,ll indx)
{
    //بدي اشوف لو بيت رقم ن 1 ولا 0
    return mask & (1ll << indx);
    //1ll
    // لو ما حطيتها بصير Overflow
}
ll getBit1(ll mask, ll indx)
{
    return mask>>indx & 1;
    /*
    الإزاحة لليمين mask >> idx:
تقوم بإزاحة بتات الرقم mask إلى اليمين بمقدار idx خانة.
هذا يجعل البت الموجود في الخانة idx ينتقل ليصل إلى الخانة الأولى (البت الأقل أهمية / LSB على اليمين).
عملية AND مع الرقم 1 & 1:
الرقم 1 بالثنائي هو ...00000001.
عند إجراء عملية & 1 مع الناتج، يتم العزل التام للبت الموجود على أقصى اليمين فقط وتصفير بقية الخانات.
إذا كان ذلك البت 1 يكون الناتج 1، وإذا كان 0 يكون الناتج 0.
     */
}
ll turnOn(ll mask,ll indx)
{
    //if the bit is 0 will be 1
    //if 1 stay 1
    return mask | (1ll << indx);
}
ll turnOff(ll mask,ll indx)
{
    return mask & (~(1ll << indx));
}
ll flip(ll mask,ll indx)
{
    //toggle
    // 0^1=1
    // 1^1=0
    return mask ^ (1ll << indx);
}
ll evenORodd(ll mask,ll indx)
{
    //indx=0
    return mask>>indx & 1;
    // 1 for odd
    // 0 for even
}
ll countOnes(ll mask,ll indx)
{
    return __builtin_popcount(mask);
    // by loop
    int cnt = 0;
    while (mask)
    {
        cnt+=mask&1;
        mask>>=1;
    }
    //return cnt;
}
//priority
// ~ , >> << ,
// == < >
// & , ^ , |
//&,^,| العمليات العادية أهم منهم
//(x & y => 5)
// will be like this x & (y>=5)
void solve()
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
