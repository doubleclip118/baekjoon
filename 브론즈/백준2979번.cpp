#include <iostream>
using namespace std;
int list[101]={0,};
int main(){
    int a,b,c,temp1,temp2,sum=0;
    cin>>a>>b>>c;
    for(int i=0;i<3;i++){
        cin>>temp1>>temp2;
        for(int j=temp1;j<temp2;j++){
            list[j]++;
        }
    }
    for(int i=1;i<=100;i++){
        if(list[i]==1){
            sum+=a;
        }
        else if(list[i]==2){
            sum+=2*b;
        }
        else if(list[i]==3){
            sum+=3*c;
        }
    }
    cout<<sum;
}