#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>mul(vector<vector<int>>arr,vector<vector<int>>brr){
	int a=arr.size();int b=arr[0].size();int c=brr.size();int d=brr[0].size();
	if(b!=c){
		cout<<"Cannot Multiply"<<endl;return arr;
	}
	vector<vector<int>>ans(a,vector<int>(d));
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			int curr=0;
			for(int k=0;k<b;k++){
				curr+=(arr[i][k]*brr[k][j]);
			}
			ans[i][j]=curr;
		}
	}return ans;
}
vector<vector<int>>binpow(vector<vector<int>>&arr,int x){
	int n=arr.size();
	vector<vector<int>>I(n,vector<int>(n,0));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(i==j)I[i][j]=1;
	if(x==0){return I;}
	//for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<I[i][j]<<" ";}cout<<endl;}
	if(x&1){I=mul(arr,I);}
	vector<vector<int>>result=binpow(arr,x>>1);
	result=mul(mul(result,result),I);
	return result;
}
int main(){
 // suppose i want to find the recurrence relation i.e. for ex-> fibonachi nth number
 // fb[i]=fb[i-2]+fb[i-1];
 // also [fb[i] , fb[i+1]] * (some matrix A) = [fb[i+1] , fb[i+2]]
 // the main question is what is this matrix (A) must looks like.
 // for now , matrix A will be [[0,1],[1,1]], we can predict it by observation;
 // and for the nth fb sequence the pattern looks like this.
 //  [fb[n-2],fb[n-1]] * (A) = [fb[n-1],fb[n]]
  int a=1,b=1;
  vector<vector<int>>A={{0,1},{1,1}};
  int n;cin>>n;
  vector<vector<int>>arr={{a,b}};
  A=binpow(A,n-2);
  arr=mul(arr,A);
  cout<<arr[0][1]<<endl;
}
