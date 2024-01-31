#include <iostream>
using namespace std;
long long dp[102];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop,temp;
    cin>>loop;
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    for(int i=0;i<loop;i++){
        cin>>temp;
        for(int j=5;j<=temp;j++){
            dp[j]=dp[j-1]+dp[j-5];
        }
        cout<<dp[temp]<<"\n";
    }
}