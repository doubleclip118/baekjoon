#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,v,cnt,total;

    cin>>a>>b>>v;
    if(a>v){
        cout<<"1";
    }
    else{
        total=v-a;
        cnt=ceil((double(total)/(a-b)));
        cout<<cnt+1;
    }

    return 0;
}