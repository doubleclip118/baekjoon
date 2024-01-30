#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int button[10]={0,};
int check(int x){
    string a=to_string(x);
    for(int i=0;i<a.length();i++){
        if(button[a[i]-'0']==1){
            return false;
        }
    }
    return true;

}

int main(){
    
    int target,number,temp;

    cin>>target>>number;
    for(int i=0;i<number;i++){
        cin>>temp;
        button[temp]=1;
    }
    int cur=100;
    int cnt=abs(target-cur);
    for(int i=0;i<1000000;i++){
        if(check(i)){
            int second=to_string(i).length()+abs(target-i);
            cnt=min(cnt,second);
        }
    }
    cout<<cnt;
}