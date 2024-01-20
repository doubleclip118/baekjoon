#include <iostream>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(true);
    // cin.tie(NULL);cout.tie(NULL);
    int a,sum=0,ans=0;
    bool flag=true;
    cin>>a;
    for(int i=0;i<a;i++){
        sum+=i;
        int kk=i;
        while(kk!=0){
            sum+=kk%10;
            kk=kk/10;
        }
        if(sum==a){
            ans=i;
            flag=false;
            break;
        }
        sum=0;
    }
    if(!flag){
        cout<<ans;
    }
    else{
        cout<<"0";
    }
}