#include<iostream>
using namespace std;
int main(){
ll n;cin>>n;
bool f=1;	
for(int i=2;i<=sqrt(n);i++){
	if(n%i==0){
		f=0;cout<<"Prime"<<endl;break;
	}
}
if(f)
cout<<"Composite"<<endl;
}
