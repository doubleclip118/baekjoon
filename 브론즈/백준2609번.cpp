#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL),cout.tie(NULL);
    int num1,num2,max1,min1,temp,mul;
    //유클리드 호제법 사용
    cin>>num1>>num2;
    temp=num1%num2;
    mul=num1*num2;
    while(temp!=0){
        num1=num2;
        num2=temp;
        temp=num1%num2;
    }
    max1=num2;
    min1=mul/max1;
    
    cout<<max1<<"\n"<<min1;


}