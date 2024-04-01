#include<iostream>
using namespace std;
#define mod 1000000007
long long binpow(int a,int b){
	if(b==0)return 1;
	long long temp=1; 
	long long result=1;
	if(b&1)temp*=a; 
	result*=(binpow(a,b>>1));
	return result*result*temp; 
}
int main(){
	cout<<binpow(2,4)<<endl;
}
