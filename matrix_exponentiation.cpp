#include<iostream>
#include<vector>
using namespace std;
// by time complexity O((n*n*n)*log(N));
// where n is the size of the matrix and N is to that power.
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
   int n;cin>>n;int x;cin>>x;
   vector<vector<int>>arr(n,vector<int>(n));
   for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
		   cin>>arr[i][j];
	   }
   }
  // for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
  vector<vector<int>>ans=binpow(arr,x);
  //~ // cout<<ans.size()<<endl;
   for(int i=0;i<n;i++)
   {
	   for(int j=0;j<n;j++){
		   cout<<ans[i][j]<<" ";
	   }cout<<endl;
   }
}
