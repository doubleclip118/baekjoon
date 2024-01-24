#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    bool flag= true;
    cin >> str;
    for(int i=0; i<str.size()/2+1; i++){
        if(str[i]!=str[str.size()-i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}