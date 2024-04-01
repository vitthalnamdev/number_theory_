#include<iostream>
#include<vector>
using namespace std;
 
int main(){
	int n;cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int ans[n][n];

	//for(int i=0;i<n;i++)for(int j=0;j<n;j++)brr[i][j]=arr[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int curr=0;
			for(int k=0;k<n;k++){
				curr+=(arr[i][k]*arr[k][j]);
			}
			ans[i][j]=curr;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}
}
