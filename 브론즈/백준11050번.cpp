#include <iostream>
using namespace std;


int main(){

    int n,k,a=1,b=1;

    cin>>n>>k;
    int sum=n;
    for(int i=0;i<k;i++){
        a=a*(n-i);
        b=b*(k-i);
    }
    cout<<a/b;

    return 0;
}