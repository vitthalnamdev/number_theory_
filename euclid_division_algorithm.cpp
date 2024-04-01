#include<iostream>
#include<algorithm>
using namespace std;
int gcd1(int a,int b){
	// this is better.
	if(b==0)return a;
	return gcd1(b,a%b);
}
int gcd2(int a,int b){
	int arr[2]={a,b};sort(arr,arr+2);
	if(arr[0]==0)return arr[1];
	return gcd2(arr[0],arr[1]-arr[0]);
}
int main(){
	int a,b;cin>>a>>b;
	cout<<gcd1(a,b)<<endl;	
	cout<<gcd2(a,b)<<endl;
}
