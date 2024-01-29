#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,cnt=0;
    cin>>a;
    int list[10000010];
    list[1]=0;
    list[2]=1;
    list[3]=1;
    for(int i=4;i<=a;i++){
        list[i]=list[i-1]+1;
        if(i%3==0){
            list[i]=min(list[i],list[i/3]+1);
        }
        if(i%2==0){
            list[i]=min(list[i],list[i/2]+1);
        }
    }
    cout<<list[a];
}