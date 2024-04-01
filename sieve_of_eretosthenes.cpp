    #include<iostream>
    #include<math.h>
    #include<vector>
    using namespace std;
    bool prime[9000001];
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        prime[1]=1;int N=9000000;
        for(int i=2;i<=sqrt(N);i++){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=1;
            }
        }
        vector<int>sz;
        for(int i=1;i<=9000000;i++){
            if(prime[i]==0)sz.push_back(i);
        }
    }
    // time complexity= N(log(log N))
