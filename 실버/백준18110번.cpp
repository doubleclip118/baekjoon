#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int level[300002];

int main(){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int number,temp,sum=0;
    cin>>number;
    if (number==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<number;i++){
        cin>>temp;
        level[i]=temp;
    }
    sort(level,level+number);
    double cut=round(number*0.15);
    for(int i=cut;i<number-cut;i++){
        sum+=level[i];
    }
    if((number-cut*2)>0){
        cout<<round(float(sum)/(number-cut*2));

    }
    else{
        cout<<0;
    }
    return 0;
}