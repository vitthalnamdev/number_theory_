#include<iostream>
using namespace std;
#define mod 1000000007
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main(){
	cout<<binpow(2,4)<<endl;
}
