    #include<iostream>
    #include<math.h>
    #include<vector>
    using namespace std;
    int prime[9000001];
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        prime[1]=1;int N=9000000;
        for(int i=1;i<=N;i++)prime[i]=i;
        for(int i=2;i<=sqrt(N);i++){
            for(int j=i*i;j<=N;j+=i){
				if(prime[j]==j)
                prime[j]=i;
            }
        }
        vector<int>factor;
        int x;cin>>x;
        while(x>1){
			int temp=x;
			while(x%prime[temp]==0)factor.push_back(prime[temp]),x/=prime[temp];
		}
		for(int i=0;i<factor.size();i++)cout<<factor[i]<<" ";cout<<endl;
    }
    // time complexity= N(log(log N))
