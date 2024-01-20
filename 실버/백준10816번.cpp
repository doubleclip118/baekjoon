#include <iostream>
using namespace std;
int list[20000001]={0,};
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL); cout.tie(NULL);
    int num1,num2,temp;
    cin>>num1;
    
    for(int i=0;i<num1;i++){
        cin>>temp;
        list[temp+10000000]++;
    }
    cin>>num2;

    for(int i=0;i<num2;i++){
        cin>>temp;
        cout<<list[temp+10000000]<<" ";
    }






    return 0;
}