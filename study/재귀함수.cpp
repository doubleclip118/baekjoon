#include <iostream>
using namespace std;


int fibo(int n){
    if( n==0 || n==1 ) {
    return 0;
    }

    cout<<"n:"<<n<<"\n";
    return fibo(n-1)+fibo(n-2);
}





int main(){

    cout<<fibo(5);

    return 0; 
}