#include <iostream>
using namespace std;
int n[100001]={0,};
int m[100001]={0,};
int dp[100001]={0,};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,temp,sum=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        cin>>temp;
        n[i]=temp;
        sum+=temp;
        dp[i]=sum;
    }
    for(int i=0;i<b;i++){
        int tmp1,tmp2;

        cin>>tmp1>>tmp2;
        cout<<dp[tmp2]-dp[tmp1]+n[tmp1]<<"\n";
    }
}