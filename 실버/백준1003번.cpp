#include <iostream>
using namespace std;
int list[41]={0,1,};


long long fibo(int n){
    if(n==1 || n==0){
        return list[n];
    }
    else if(list[n]==0){
        list[n]=fibo(n-1)+fibo(n-2);
    }
    return list[n];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int temp;
        cin>>temp;
        if(temp!=0){
            cout<<fibo(temp-1)<<" "<<fibo(temp)<<"\n";
        }
        else{
            cout<<"1"<<" "<<"0"<<"\n";
        }
    }


}