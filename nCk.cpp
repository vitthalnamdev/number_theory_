// we have doing it for q queries.
#include<iostream>
using namespace std;
#define mod 1000000007
int F[1000001];
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (res%mod * res%mod * a)%mod;
    else
        return (res%mod * res%mod)%mod;
}
int main(){
    F[0]=F[1]=1;
    for(int i=2;i<=1000000;i++){
        F[i]=(F[i-1]*(1LL)*i)%mod;
    }
    int q;cin>>q;
    
    while(q--) 
    {
       int n,k;cin>>n>>k;
       long long result = F[n];
       result = (result * 1LL * binpow(F[k],mod-2))%mod;
       result = (result * 1LL * binpow(F[n-k],mod-2))%mod;
       cout<<result<<endl;
    } 
     
}