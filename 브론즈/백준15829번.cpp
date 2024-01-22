#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    long long loop,temp1=0;
    long long m=1234567891;
    long long r=1;
    string temp;
    cin>>loop;
    cin>>temp;
    for(int i=0;i<loop;i++){
        temp1+=(((long(temp[i])-96)*r))%m;
        r=(r*31)%m;
    }
    cout<<temp1%m;
}