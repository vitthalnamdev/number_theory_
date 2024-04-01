#include<iostream>
using namespace std;
int main(){
	// modulo inverse .i.e =>  (a/b)%P = (a*(X))%P , where X is the multiplicative inverse of b or ((b*X)%P is =>1.)
	// We can't calculate X for every number,  
	// if you want to find the modulo inverse of x mod p then gcd(x,p)=1...
	// fermat theorem.
	// if we have to calculate a^-1 % m ,
	// but only when m is prime.
	// pow(a,m-1)%m = 1 % m .
	// or 
	// pow(a,m-2)%m = (1/a) % m  => ans.
	
}
