#include <iostream>
#include <algorithm>
using namespace std;
int score[302]={0,};
int dp[302]={0,};
int main(){
    int num,temp;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>temp;
        score[i+1]=temp;
    }
    //dp 로직
    dp[1]=score[1];
    dp[2]=score[2]+score[1];
    dp[3]=max(score[3]+score[1],score[3]+score[2]);

    for(int i=4;i<=num;i++){
        dp[i]=max(score[i]+dp[i-2],score[i]+score[i-1]+dp[i-3]);
    }
    cout<<dp[num]<<"\n";

}