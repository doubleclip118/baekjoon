#include <iostream>
int dp[13];
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num,temp;
    cin>>num;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<12;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    for(int i=0;i<num;i++){
        cin>>temp;
        cout<<dp[temp]<<"\n";
    }

    return 0;
}