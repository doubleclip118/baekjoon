#include <iostream>
using namespace std;
int price[11]={0,};
int main(){
    int a,b,temp,cnt=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>temp;
        price[i]=temp;
    }
    for(int i=a-1;i>=0;i--){
        if(price[i]!=0){
            cnt+=b/price[i];
            b=b%price[i];
        }
    }
    cout<<cnt;
}