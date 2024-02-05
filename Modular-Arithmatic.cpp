#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,fact=1;
    cin>>n;
    int m=1e9+7;
    for(int i=2;i<=n;i++)
    {
        fact=(fact*i)%m;
    }
    cout<<m<<ss;
    return 0;
}
//(a+b)%m=((a%m)+(b%m))%m
//(a*b)%m=((a%m)*(b%m))%m
//(a-b)%m=((a%m)-(b%m)+m)%m
//(a/b)%m=((a%m)*((b^-1)%m))%m
//b^-1=multiplicative inverse
