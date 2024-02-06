#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
const int mod=1e9+7;
using namespace std;
ll binary_exp_itra(int a,int b)
{
    ll ans=1;
    while(b)//b>0
    {
        if(b&1)//thats mean binary last bit 1 and bi odd value
        {
            ans=ans*a;//for module ans=(ans*a)%mod
        }
        a=a*a;//for module (a*a)%mod
        b>>=1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int base,exp;
    cin>>base>>exp;
    cout<<binary_exp_itra(base,exp)<<ss;
    return 0;
}
