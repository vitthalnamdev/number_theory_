// we have doing it for q queries.
#include<iostream>
using namespace std;
#define mod 1000000007
int F[1000001];
int power(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res = (res * 1LL * a) % mod;
		a = (a * 1LL * a) % mod;
		b /= 2;
	}
	return res;
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
       result = (result * 1LL * power(F[k],mod-2))%mod;
       result = (result * 1LL * power(F[n-k],mod-2))%mod;
       cout<<result<<endl;
    } 
     
}