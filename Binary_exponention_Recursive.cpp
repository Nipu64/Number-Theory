#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
const int mod=1e9+7;
using namespace std;
ll binary_exp(int a,int b)
{
    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1)//b%2!=0
    {
        return a*res*res;//for module (a*(res*res)%mod)%mod
    }
    else{
        return res*res;//for module (res*res)%mod
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int base,exp;
    cin>>base>>exp;
    cout<<binary_exp(base,exp)<<ss;
    return 0;
}
