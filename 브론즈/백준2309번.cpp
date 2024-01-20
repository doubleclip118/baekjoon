#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int short_man[10];
    int temp,sum=0;
    bool tf=false;
    for(int i=0;i<9;i++){
        cin>>temp;
        short_man[i]=temp;
        sum+=temp;
    }
    outerLoop:
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(sum-short_man[i]-short_man[j]==100){
                short_man[i]=0;
                short_man[j]=0;
                tf=true;
                break;
            }
        }
        if(tf){
            break;
        }
    }
    sort(short_man,short_man+9);
    for(int i=0;i<9;i++){
        if(short_man[i]!=0){
            cout<<short_man[i]<<"\n";
        }
    }




}