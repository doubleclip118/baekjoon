#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int dp[50002]={0,};
int main(){
    int a,cnt;
    cin>>a;
    dp[1]=1;
    for(int i=1;i<=a;i++){
        dp[i]=dp[i-1]+1;
        for(int j=1;j*j<=i;j++){
            dp[i]=min(dp[i],dp[i-j*j]+1);
        }
    }
    cout<<dp[a];
}